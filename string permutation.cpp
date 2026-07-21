#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
void getper(string &str , int index , vector<string> &ans){
	if(index == str.length()){
	
	ans.push_back(str);
	return;
}
	
	 for(int i =index ; i < str.size() ; i++){
	 	swap(str[index] , str[i]);
	 	getper(str , index+1 , ans);
	 	//backtracking to fill unique value
	 	swap(str[index] , str[i]);
	 }
}
int main(){
	string str;
	str = "abcde";
	vector<string> ans;
	getper(str , 0 , ans);
	for(int i = 0 ; i < ans.size() ; i++){
		cout<<ans[i]<<endl;
	}
	
}

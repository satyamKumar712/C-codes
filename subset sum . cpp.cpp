#include<iostream>
using namespace std;
void print(int arr[] , int index , int n , int sum){
	if(index== n){
		cout<<'{';
		cout<<sum<<endl;
		cout<<'}';
		return;
	}
	//include
	print(arr , index+1 , n , sum+arr[index]);
	//not include element
	print(arr , index +1 , n ,sum);
}
int main(){
	int arr[] = {1,2,3};
	int sum = 0;
	int n = sizeof(arr) / sizeof(arr[0]);
	 
 	print(arr , 0 , n , sum);
 
	
}

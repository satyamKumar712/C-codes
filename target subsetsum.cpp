#include<iostream>
using namespace std;
 bool find(int arr[] , int index , int  n , int target){
 	if(target == 0)
 	return 1;
 	if(index == n || target < 0 )
 	return 0;
 	return find(arr , index +1  , n , target) || find(arr , index + 1 , n , target - arr[index]);
 }
 int main(){
 	int arr[] = {1 , 5 , 6 , 3};
 	 int target = 10;
 	int n = 4;
 	if(find(arr , 0 , 4 , 10)){
 		cout<<"target sum found";
	 }else{
	 	cout<<"targetsum not found";
	 }
 }

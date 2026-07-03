#include<iostream>
#include<algorithm>
using namespace std;
int partition(int arr[] , int start , int end){
	int pos = start;
	for(int i = start ; i<=end ; i++){
		if(arr[i] <= arr[end]){
			swap(arr[i] , arr[pos]);
			pos++;
		}
	}
	return pos-1;
}
void quicksort(int arr[] , int start , int end){
	if(start >= end){
		return;
	}
	int index =0;
	int pivot = partition(arr , start  , end);
	quicksort(arr , start , pivot-1);
	quicksort(arr , pivot+1 , end);
}
int main(){
	int arr[] = {3,2,5,3,8,0,4,6,8};
	quicksort(arr , 0 ,8);
	for(int i =0 ; i<=8 ; i++){
		
		cout<<arr[i]<<"    ";
	}
}

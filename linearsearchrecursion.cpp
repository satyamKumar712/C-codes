#include<iostream>
using namespace std;
bool linearsearch(int arr[] , int target , int index , int n){
    if(index == n)
        return 0;
    
    if(arr[index] == target)
  return 1;
 
    
    return linearsearch(arr , target , index+1 , n);
}
int main(){
    
    int arr[] = {1,2,3,5,6,7,8};
    int target =8;
    cout<<linearsearch(arr , target , 0 , 7);
}

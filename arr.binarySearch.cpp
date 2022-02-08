#include <iostream>
using namespace std;

int binarySearch(int arr[],int n, int search){
  int s=0; int e=n-1; int mid=s+(e-s)/2;
  while(s<=e){
    if(search==arr[mid]){
      return mid;
    }
    else if(search>arr[mid]){
      s=mid+1;
    }
    else if(search<arr[mid]){
      e=mid-1;
    }
    mid=s+(e-s)/2;
  }
  return -1;
}

int main(){
  int n; cin>>n; int arr[n];
  for(int i=0; i<n; i++){
    cin>>arr[i];
  }
  int search; cin>>search;
  cout<<binarySearch(arr, n, search);
  return 0;
}

#include <iostream>
using namespace std;

int peakElement(int arr[], int n){
  int s=0; int e=n-1; int mid=s+(e-s)/2;
  while(s<=e){
    if(arr[mid]>arr[mid-1] && arr[mid]<arr[mid+1]){
      s=mid+1;
    }
    else if(arr[mid]<arr[mid-1] && arr[mid]>arr[mid+1]){
      e=mid-1;
    }
    else if(arr[mid]>arr[mid-1] && arr[mid]>arr[mid+1]){
      return mid;
    }
    mid = s+(e-s)/2;
  }
  return -1;
}

int main() {
  int n; cin>>n; int arr[n];
  for(int i=0; i<n; i++){
    cin>>arr[i];
  }
  cout<<"Peak: "<<peakElement(arr, n);
  return 0;
}

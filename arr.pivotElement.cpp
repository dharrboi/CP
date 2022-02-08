#include <iostream>
using namespace std;

int pivotElement(int arr[], int n){
  int s=0; int e=n-1; int mid=s+(e-s)/2;
  while(s<e){
    if(arr[mid]>arr[0]){
      s=mid;
    }
    else if(arr[mid]<arr[0] && arr[mid-1]>arr[mid]){
      return mid;
    }
    else if(arr[mid]<arr[0]){
      e=mid;
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
  cout<<pivotElement(arr, n);
  return 0;
}

#include <iostream>
using namespace std;

int searchInRotatedSortedArray(int arr[], int n, int pivot, int key){
  int s; int e;
  if(key>arr[pivot] && key<arr[0]){
    s=pivot+1; e=n-1;
  }
  else if(key>arr[pivot] && key>arr[0]){
    s=0; e=pivot-1;
  }
  else if(key==arr[pivot]){
    return pivot;
  }
  int mid=s+(e-s)/2;
  while(s<=e){
    if(key>arr[mid]){
      s=mid+1;
    }
    else if(key<arr[mid]){
      e=mid-1;
    }
    else if(key==arr[mid]){
      return mid;
    }
    mid = s+(e-s)/2;
  }
  return -1;
}

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
  int key; cin>>key;
  cout<<searchInRotatedSortedArray(arr, n,pivotElement(arr, n), key);
  return 0;
}

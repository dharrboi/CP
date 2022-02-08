#include <iostream>
using namespace std;

int main(){
  int n; cin>>n;
  int arr[n];
  for(int i=0; i<n; i++){
	  cin>>arr[i];
  }
  int size=sizeof(arr)/sizeof(arr[0]);
  int a = 0;
  for(int i=0; i<size; i++){
    a = a^arr[i];
  }
  cout<<a;
  return 0;
}

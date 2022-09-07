#include <bits/stdc++.h>

using namespace std;

int main(){
  int n;
  cin>>n;
  
  int arr[n];
  int i =0;
  while(i<n){
    cin>>arr[i];
    i++;
  }

  int len = sizeof(arr)/sizeof(arr[0]);

  sort(arr, arr+n);

  for(int j = 0; j < n; j++){
    cout<<arr[j]<<" ";
  }
  cout<<"\n";
  
}
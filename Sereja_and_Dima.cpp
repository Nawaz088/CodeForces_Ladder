#include <bits/stdc++.h>
using namespace std;

int main(){
  int len;
  cin>>len;
  int arr[len];
  

  for(int i =0; i < len; i++){
    cin>>arr[i];
  }
  
  int s = 0, d = 0;
  if(len%2 == 0){
    for(int j = 0; j < len/2; j++){
      s += arr[j];
    
    for(int j = len/2; j < len; j++){
      d += arr[j];
    }
  }
    if(len <= 2){
      cout<<d<<" "<<s<<endl;
    }
    else{
      cout<<d/2<<" "<<s<<endl;
    }
  }
  else{
    for(int k = 0; k < len; k+=2){
      s += arr[k];
    }
    for(int k = 1; k < len-1; k+=2){
      d += arr[k];
    }
    cout<<s<<" "<<d<<endl;
  }
}
#include <bits/stdc++.h>
using namespace std;

int main(){
  string str;
  cin>>str;

  int dcnt = 0, ncnt = 0;
  sort(str.begin(), str.end());
  //cout<<str<<endl;
  int n = str.length();
  for(int i =0; i < n-1; i++){
    if(str[i] == str[i+1]){
      dcnt++;
    }
    
  }

  ncnt = str.length() - dcnt;

  if(ncnt%2 ==0){
    cout<<"CHAT WITH HER!";
  }
  else{
    cout<<"IGNORE HIM!";
  }
  
}
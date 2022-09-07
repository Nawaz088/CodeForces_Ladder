#include <bits/stdc++.h>

using namespace std; // 1 -1 1 -1 -1 1 1 1

int main(){
  int n;
  cin>>n;
  int officer = 0, cnt = 0;
  for(int i =0; i < n; i++){
    int elm;
    cin>>elm;
    if(elm == -1 && officer ==0) cnt++;
    else officer += elm;
  }
  cout<<cnt<<endl;
}
#include <bits/stdc++.h>

using namespace std;

int main(){
  int n;
  string str;
  cin>>n;
  cin>>str;
  int rcnt = 0;
  for(int i = 0; i < n-1; i++){
    if(str[i] == str[i+1]) rcnt++;
  }

  cout<<rcnt<<endl;
}
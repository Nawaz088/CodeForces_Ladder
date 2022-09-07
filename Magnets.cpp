#include <bits/stdc++.h>

using namespace std;

int main(){
  int n;
  cin>>n;
  int ch[n];
  int scnt = 0;
  for(int i = 0; i < n; i++){
    cin>>ch[i]; 
  }
  
  int j;
  for(j = 0; j < n; j++){
    if(ch[j] != ch[j+1]){
      scnt++;
    }
    
  }
  cout<<scnt<<endl;
}
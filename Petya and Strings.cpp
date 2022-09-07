#include <bits/stdc++.h>

using namespace std;

int main(){
  string a1, a2;
  cin>>a1>>a2;
  int n = a1.length();
  for(int i =0; i < n; i++){
    a1[i] = tolower(a1[i]);
    a2[i] = tolower(a2[i]);
    }

  if(a1.compare(a2) > 0){
    cout<<1<<"\n";
  }
  else if(a1.compare(a2) < 0){
    cout<<-1<<"\n";
  }
  else{
    cout<<0<<"\n";
  }
  return 0;
}

  
  
}
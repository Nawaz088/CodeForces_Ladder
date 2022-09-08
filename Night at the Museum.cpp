#include <bits/stdc++.h>

using namespace std;

int main(){
  string name;
  cin>>name;
  int n = name.length();
  int count = 0;//min((name[0] - 'a'), 26-(name[0] - 'a'));
  for(int i = 0; i < n; i++){
    //int x = (int)name[i];
    if(i == 0){
      count += min(abs(name[i]-'a'), 26-abs(name[i]-'a'));
      continue;
    }
   
    //int y = (int)name[i-1];
    count = count + min(abs(name[i] - name[i-1]), 26-abs(name[i] - name[i-1]));
    
  }
  cout<<count<<endl;
}
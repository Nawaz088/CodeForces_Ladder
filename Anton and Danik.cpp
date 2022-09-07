#include <iostream>
using namespace std;
int main() {
  int n; string str;
  int Acount = 0, Dcount = 0;
  
  cin>>n; cin>>str;
  
  for(int i = 0; i < n; i++)
    {
      if(str[i] == 'A') Acount++;
      else Dcount++;
    }
  
  if(Acount > Dcount) cout<<"Anton"<<"\n";
  else if(Dcount > Acount) cout<<"Danik"<<"\n";
  else cout<<"Friendship"<<"\n";
  
}
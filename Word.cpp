#include <bits/stdc++.h>
using namespace std;
void upper(string str){
  for(int i = 0 ,n = str.size() ; i < n ; i++)
    {
        //check if the str[i] is lowercase 
        if(str[i]  >= 'a' && str[i]<='z' )
        {
            //convert the Lowercase to uppercase via ASCI Chart
            char a = str[i] - 32 ;
            cout<<a;
        }

        //the user input was upperCase 
        else
        cout<<str[i];
    }
}
void lower(string str){
  for(int i = 0 ,n = str.size() ; i < n ; i++)
    {
        //check if the str[i] is lowercase 
        if(str[i]  >= 'A' && str[i]<='Z' )
        {
            //convert the uppercase to LOWERCASE via ASCI Chart
            char a = str[i] + 32 ;
            cout<<a;
        }

        //the user input was lowercase 
        else
        cout<<str[i];
    }
}
int main(){
  string str;
  //char ch;
  int ucnt = 0, lcnt = 0;

  cin>>str;
  int str2 = str.length();

  for(int i = 0; i<str2; i++){
    if(isupper(str[i])){
      ucnt++;
    }
    else{
      lcnt++;
    }
  }
  //cout<<ucnt<<" "<<lcnt<<endl;
  if(ucnt > lcnt){
    upper(str);
  }
  else if(ucnt < lcnt){
    lower(str);
  }
  else{
    lower(str); 
  }

  cout<<str.substr(str2)<<"\n";
}
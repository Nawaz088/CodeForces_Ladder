#include <iostream>
using namespace std;

int main(){
  int n, a1, a2,a3;
  int count =0;
  cin>>n;
  for(int i = 0; i < n; i++){
    cin>>a1>>a2>>a3;

    if(a1+a2+a3 >= 2){
      count++;
    }
    
  }
  cout<<count<<"\n";
}
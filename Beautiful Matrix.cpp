#include <iostream>
using namespace std;

int main(){
  int count, a1,a2,a3,a4,a5;

  for(int i = 0; i < 5; i++){
    cin>>a1>>a2>>a3>>a4>>a5;
    if((a1 == 1 ||a5==1)&& (i == 0 || i == 4)) cout<<4<<"\n";
    else if ((a2==1||a4==1) && (i == 0 || i == 4)) cout<<3<<"\n";
    else if((a1 == 1||a5==1)&&(i == 1|| i==3)) cout<<3<<"\n";
    else if((a2 == 1||a4==1) && (i == 1 || i==3)) cout<<2<<"\n";
    
    else if((a1 == 1 || a5 == 1) && i == 2) cout<< 2<<"\n";
    else if((a2 == 1 || a4 == 1) && i == 2) cout<< 1<<"\n";
    else if(a3 == 1 && (i == 0 || i == 4)) cout<< 2<<"\n";
    else if(a3 == 1 && (i == 1 || i == 3)) cout<< 1<<"\n";
    else if(a3 == 1 && i == 2) cout<<0<<"\n";
    
  }
  
}
#include<iostream>
using namespace std;

  int main(){
    //formação da nossa potencia 
    
    int base;
    int exp;
    int mod;
    cin>>base>>exp;

    base %= mod;
    long ans =1;
    while(exp>0){
      if(exp & 1) ans = ans * base % mod;
      base = (long) base * base % mod;
      exp >>=1;
    }
    cout<<ans<<endl;
    return 0;
  }


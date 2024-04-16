#include<iostream>
using namespace std;
//metodo recursivo para o algoritimo de euclides extendido...
  int gcd(int a,int b){
    return b ? gcd(b, a %b) : a;
  }

  int main(){
    int x,y,ans;
    cin>>x>>y;
    ans=gcd(x,y);
    cout<<ans<<endl;

    return 0;
  }




#include<iostream>
using namespace std;
//modo interativo do mdc...
//time complexity 0(log(min(a,b)))
  int main(){
    int a,b,ans;
    cin>>a>>b;
    if(b){
      while((a %=b) && (b%=a));
      ans=a+b;
    }
    cout<<ans;

    return 0;
  }


#include<bits/stdc++.h>
using namespace std;
//algoritimo não otimizado cuidado com o n que será usado 
  int mmxc(int m, int n, int xm, int xn){
    if (xm == xn){
      return xm;
      if (xm <xn){
        return mmxc(m,n,xm+m,xn);
      }else{
          return mmxc(m,n,xn+n,xm);
        }
      }
    return 1;
    };

      int main(){
        int a,b,c,d,ent;
        cin>>a>>b>>c>>d;
        ent=mmxc(a,b,c,d);
        cout<<ent<<endl;
        return 0;
      };



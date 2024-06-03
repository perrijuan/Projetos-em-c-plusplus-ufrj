
#include <bits/stdc++.h>

using namespace std;

int main()
{
  
  int xm,ym,xr,yr;
  cin>>xm>>ym>>xr>>yr;
  //uso do algoritimo da distancia de manhatann
  //usando o valor absoluto de x1-x2 + y1-y2 na formula
  int distManhattan=abs(xm-xr)+abs(yr-ym);
  
  cout<<distManhattan;

    return 0;
}

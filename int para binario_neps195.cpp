
#include <bits/stdc++.h>
using namespace std;



int main()
{
    
  int a,i=0;
  cin>>a;
  if(a==0){
      cout<<'0';
  }
  
  vector<int> ans;
  
  //tecnica das divisões sucessivas e armazena dado no vetor-dim
  while(a>0){
      ans.push_back(a%2);
      a/=2;
  }
  
  
  
  //quando fazemos as divisões sucessivas usamos o reverso para pegar
  //a ordem correta dos bits an-1,an,a1 ->a1,an,a-1;
  
  reverse(ans.begin(), ans.end());
  
      for(int numero : ans){
          cout<<numero;
  }
 
    return 0;
}

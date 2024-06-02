#include <bits/stdc++.h>
using namespace std;

int main()
{
    
    
   string line;
   getline(cin, line);
   
   stringstream entrada(line);
   vector<int> vet;
   int a;
   
   while(entrada>> a){
       if(a==0){
           break;
       }
       vet.push_back(a);
   }
   
   sort(vet.begin(), vet.end(), greater<int>());
   
   int ans= vet.front();
   
   cout<<ans;
   
   
    

    return 0;
}

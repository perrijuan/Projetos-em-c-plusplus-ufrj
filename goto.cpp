#include<bits/stdc++.h>
using namespace std;

 int main(){
     vector<int> a{};
     for(int i=0;i<10;i++){
         int aux;
         cin >> aux;
         a.push_back(aux);
     }
     int b;
     cin>>b;
     for(int y=0;y<10;y++){
         if(a[y]==b){
             cout<<"SIM";
             goto label;
         }
     }
     
     cout<<"NÃO";
     label:
     return 0;
 }

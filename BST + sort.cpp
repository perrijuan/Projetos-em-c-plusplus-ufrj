
#include<bits/stdc++.h>
using namespace std; 

 int main(){
     int a;
     cin>>a;
     int chave=987;
     
     vector<int> memoria{};
     for(int x=0;x<a;x++){
         int aux;
         cin>>aux;
         memoria.push_back(aux);
     }
     //algoritimo para ordernar o vetor para a busca binaria 
     sort(memoria.begin(), memoria.end());
    
    int left=0;
    int right=a-1;
    //pecorre o vetor de forma organizada e vai dividindo o vetor ate achar o valor
    while(right>=left){
        int meio=(left+right)/2;
        if(memoria[meio]==chave){
            cout<<"achou o valor no vetor";
            return 0;
        }else if(memoria[meio]>chave){
            right=meio-1;
        }else{
            left=meio+1;
         }
        
            
        }
        //caso o valor não esteja no vetor 
    cout<<"a chave não esta no vetor";
     return 0;
     
 }

#include<iostream>

using namespace std;

long long int soma_aritinetica(int a, int b){
  long long int retorna;
  //resto b-a+1
  long long int r=b-a+1;
  return retorna=((a+b)*r)/2;
}
//uso do tipo long long int foi necessario tive problemas de bufferoveside 
int main(){

  long long int a,b;
  cin>>a>>b;
  cout<<soma_aritinetica(a,b)<<endl;
  return 0;
}

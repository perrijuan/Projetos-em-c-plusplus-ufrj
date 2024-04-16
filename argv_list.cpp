#include<bits/stdc++.h>
#include<cstdlib>

using namespace std;

  int main(int agrc, char* agrv[]){

    if(argc != 3){
      cerr<<"uso"<<agrv[0]<<"<numero1> <numero2>"<< endl;
      return 1;
    }
    //estudar a relação de atoi e aplicação em argv ::
    int num1 = atoi(argv[1]);
    int num2 = atoi(argv[2]);

    int resultado = num1 + num2;
    cout<<"a some de"<<num1<<"e"<<num2<<"e"<<resultado<<endl;
    
    return 0;

  }



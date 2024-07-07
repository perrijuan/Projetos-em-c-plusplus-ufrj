#include<iostream>
#include<vector>
#include<stack>

using namespace std;

int main (){
//adicionamos valores a pilha 
 stack<int>pilha;
 pilha.push(1);
 pilha.push(2);
 pilha.push(3);
 cout<<"elementos no topo"<<pilha.top()<<endl;
//removemos o ultimo termo da pilha 
 pilha.pop();

 cout<<"elementos no topo pós remoção"<<pilha.top()<<endl;

//fazemos a contagem de intens pós a remoção 
 cout<<"tamanho da pilha"<<pilha.size()<<endl;

 
}
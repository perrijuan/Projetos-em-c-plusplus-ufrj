#include <bits++/stdc>
//uma cpu de 8 bits em cpp
using namespace std;
int main() {
  typedef struct cpu{
    //estudo de struct aplicando em uma cpu emulada
    //unsiged so aceita numeros positivos 
    signed registradores[8];
    signed operator;
    signed programador[100];
    int ponteiro_operator;
  }CPU;
  
  //a inicialização do struct cpu
  void iniciaAcpu(CPU *cpu){
    for(int y=0;i<registradores;y++){
      cpu->registradores[y]=0;
    }
  }
  void fetch(CPU *cpu){
    cpu->operator=cpu->programador[cpu->ponteiro_operator];
  }
  
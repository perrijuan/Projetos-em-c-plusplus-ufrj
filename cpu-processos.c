#include <stdio.h>
#include <stdlib.h>
#include <unistd.h> //- >  estamos usando
// a bibloteca unistd para subistituir a biblioteca common.h

// fazemos um loop infinito com a variavel da string como entrada

// usamos esse programa par verficar como um s.o gerencia varios processos
// na cpu de uma vez

int main(int agrc, char *argv[]) {
  if (agrc != 2) {
    fprintf(stderr, "usado :cpu <string>\n");
    exit(1);
  }
  char *str = argv[1];
  // loop infinito
  while (1) {
    // pararamos a execução por 1 segundo
    sleep(1);
    printf("%s\n", str);
  }
  return 0;
}

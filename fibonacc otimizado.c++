#include <iostream>

int main() {
  
  int n;
  scanf("%d", &n);
  //utilizando a tecnica de memorização para uma otimização do codigo 
  //usando int teremos problemas de bufferoverflow para isso temos que usar
  //long long int para podermos usar numero exponenciais longos 
  long double vet[n + 1];
  vet[0] = 0;
  vet[1] = 1;

  for (int i = 2; i <= n; i++) {
    vet[i] = vet[i - 1] + vet[i - 2];
  }

  std::cout << vet[n] << std::endl;

  return 0;
}
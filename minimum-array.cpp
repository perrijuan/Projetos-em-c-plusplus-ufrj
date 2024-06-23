#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
  int array[] = {4, -5434, 6, 7, 8, 7, 4, 2};

  int min;
  //pega o tamanho do array de forma manual 
  int tamanho = sizeof(array) / sizeof(array[0]);

  // pegando o menor valor comparando de forma linear
  for (int a = 0; a < tamanho; a++) {

    if (array[a] < min) {
      min = array[a];
    }
  }
  // retorna o menor valor de um array
  cout << min << endl;

  return 0;
}

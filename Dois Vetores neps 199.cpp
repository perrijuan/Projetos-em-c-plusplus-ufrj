#include <iostream>
#include <vector>
using namespace std;

int main() {
 //algoritimo para treinar a sintaxe de cpp e uso de vetores dinamicos 
  vector<int> vetor{};
  vector<int> vetor2{};
  for (int i = 0; i < 10; i++) {
    int aux;
    cin >> aux;
    if (aux % 2 == 0) {
      vetor.push_back(aux);
    } else {
      vetor2.push_back(aux);
    }
  }

  // usando o for curto para a saida do vetor
  for (auto z : vetor) {
    cout << z << " ";
  }
  // para garantir que os pares estejam em linhas separadas
  cout << endl;
  for (auto y : vetor2) {
    cout << y << " ";
  }
  cout << endl;

  return 0;
}

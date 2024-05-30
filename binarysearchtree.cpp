#include <bits/stdc++.h>
using namespace std;
int main() {
  int chave = 5;
  vector<int> memory{};
  int a;
  cin >> a;
  // entrada do vetor
  for (int i = 0; i < a; i++) {
    int valor;
    cin >> valor;
    memory.push_back(valor);
  }
  // algoritimo de busca binaria nlogn
  for (int y = 0; y < a; y++) {
    int meio = memory[y] + memory[y - 1] / 2;
    if (meio == chave) {
      cout << "acertou";
    }
    if (meio > chave) {
      meio = meio - 1;
    } else {
      meio = meio + 1;
    }
  }
  cout << "não acertou o numero";
  return 0;
}

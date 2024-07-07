#include <iostream>
#include <stack>

using namespace std;
// algoritimo para comprar o tamanho das pilhas
int main() {
  stack<int> pilha;
  stack<int> pilha2;

  int entrada;
  int entrada2;

  cout << "tamanho da pilha A" << endl;
  cout << "tamanhp da pilha B" << endl;

  int n, e;
  cin >> n >> e;

  for (int q = 0; q < n; q++) {
    cin >> entrada;
    pilha.push(entrada);
  }
  for (int i = 0; i < e; i++) {
    cin >> entrada2;
    pilha2.push(entrada2);
  }
  int aux = pilha.size();
  int aux2 = pilha2.size();

  if (aux > aux2) {
    cout << "pilha 1 é maior";
  } else {
    cout << "pilha2 é maior";
  }
}

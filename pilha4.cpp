#include <iostream>
#include <stack>

using namespace std;

int main() {

  int a;

  stack<int> pilha;

  pilha.push(1);
  pilha.push(3);
  pilha.push(454);
  pilha.push(435);
  pilha.push(44233);

  cout << pilha.size() << endl;
  cout << "valor do topo " << pilha.top() << endl;

  while (!pilha.empty()) {
    pilha.pop();
    if (pilha.empty()) {
      cout << "pilha vazia" << endl;
    }
  }
}

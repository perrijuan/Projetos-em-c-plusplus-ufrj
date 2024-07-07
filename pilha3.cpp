#include <iostream>
#include <stack>
#include <vector>
using namespace std;

int main() {

  stack<int> pilha;
  int a;

  for (int i = 0; i < 10; i++) {
    cin >> a;
    pilha.push(a);
  }
  cout << pilha.size() << pilha.top();

  while (!pilha.empty()) {
    pilha.pop();
    if (!pilha.empty())
      cout << pilha.top() << pilha.size();
  }
}

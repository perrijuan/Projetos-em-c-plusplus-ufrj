#include <iostream>
#include <vector>
using namespace std;

vector<int> pilha(int a) {
  vector<int> vet{a};
  int asz;
  for (int p = 0; p < vet.size(); p++) {
    cin >> asz;
    vet.push_back(asz);
  }
  return vet;
}

int main() {
  int a;
  cin >> a;
  vector<int> resultado = pilha(a);

  for (auto z : resultado) {
    cout << z;
  }
  return 0;
}

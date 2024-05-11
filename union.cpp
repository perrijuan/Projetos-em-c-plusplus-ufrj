#include <bits/stdc++.h>
using namespace std;
// definimos união de um conjunto com set
int main() {

  set<int> set1 = {11, 12, 13, 14, 15};
  set<int> set2 = {14, 15, 16, 17, 18,11,15,13};
 //aplicamos a concatenação dos dois vetores 
  vector<int> ys_union(set1.size() + set2.size());
  auto it = set_union(set1.begin(), set1.end(), set2.begin(), set2.end(),
                      ys_union.begin());
  //faz a aplicação da união do vetor já concatenado 
  ys_union.resize(it - ys_union.begin());
  //imprime a saida do vet 
  for (int element : ys_union) {
    cout << element << " ";
  }
  return 0;
}

#include <bits/stdc++.h>
using namespace std;

int ackermann(int m, int n) {
  if (m == 0) {
    return n + 1;
  } else if (m >= 1 && n >= 1) {
    return ackermann(m - 1, 1);
  } else {
    return arkermann(m - 1, arkermann(m, n - 1));
  }
}

int main() {
  int n, m;
  cin >> n >> m;
  cout << arker(n, m);

  return 0;
}

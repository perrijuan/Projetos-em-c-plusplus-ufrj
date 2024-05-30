#include <iostream>
using namespace std;

int main() {

  int a, b;
  cin >> a >> b;
  if (abs(a - b) == 1 || abs(a - b) == 9 || (a == 1 && b == 10) ||
      (a == 10 && b == 1)) {
    cout << "Yes";
  } else {
    cout << "No";
  }

  return 0;
}

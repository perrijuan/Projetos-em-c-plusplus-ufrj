#include<bits/stdc++.h>

using namespace std;

bool isPrime(int n) {
    if (n <= 1) {
        return false;
    }
    if (n == 2) {
        return true;
    }
  //separa os n pares
    if (n % 2 == 0) {
        return false;
    }
  //separa os n primos impares 
    for (int i = 3; i <= sqrt(n); i += 2) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int N;
    cin >> N;
//as entradas simutaneas 
    for (int i = 0; i < N; ++i) {
        int X;
        cin >> X;

        if (isPrime(X)) {
            cout << "Prime" << endl;
        } else {
            cout << "Not Prime" << endl;
        }
    }

    return 0;
}


#include <iostream>
using namespace std;

int main(int argc, char* argv[]) {
    // Imprime o número total de argumentos passados
    cout << "numero total de argumentos" << argc <<endl;

    // Imprime cada argumento individual
    cout << "Argumentos passados:" << endl;
    for (int i = 0; i < argc; ++i) {
      cout << "Argumento " << i << ": " << argv[i] << endl;
    }

    return 0;
}

#include <iostream>
#include <string>

using namespace std;

int frase_para_int_ascii(const string& frase) {
    int valor_int = 0; // Inicializa o valor_int com zero
    
    for (char caractere : frase) {
        valor_int += static_cast<int>(caractere); 
    }
    return valor_int;
}

int main() {
    string frase;

    cout << "Digite uma frase: ";
    getline(cin, frase);

    int valor_int = frase_para_int_ascii(frase);
    cout << "Valor inteiro ASCII da frase: " << valor_int << endl;

    return 0;
}


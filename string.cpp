#include <iostream>
using namespace std;


int main() {
    
    setlocale(LC_ALL, "pt_BR.UTF-8"); 

    string texto; // Variável para armazenar a string
    int contadorA = 0; // Contador para 'a'
    int contadorB = 0; // Contador para 'A'


    // Entrada da string
    cout << "Digite uma string: ";
    cin >> texto; // Lê a string do usuário

    // Laço para verificar cada caractere
    for (int i = 0; i < texto.length(); i++) {
        // Verifica se o caractere é 'a' (minúsculo)
        if (texto[i] == 'a') {
            contadorA++; // Incrementa o contador para 'a'
        }
        // Verifica se o caractere é 'A' (maiúsculo)
        else if (texto[i] == 'A') {
            contadorB++; // Incrementa o contador para 'A'
        }
    }

    // Mostra o resultado
    cout << "A letra 'a' (minúscula) aparece " << contadorA << " vez(es)." << endl;
    cout << "A letra 'A' (maiúscula) aparece " << contadorB << " vez(es)." << endl;

    return 0;
}

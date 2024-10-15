#include <stdio.h>     // Para printf e scanf
#include <stdbool.h>   // Para usar o tipo bool
#include <locale.h>    // Para usar setlocale

// Função para verificar se o número pertence à sequência de Fibonacci
bool pertenceFibonacci(int n) {
    int a = 0, b = 1;

    if (n == 0 || n == 1) {
        return true;
    }

    int fibonacci = a + b;

    while (fibonacci <= n) {
        if (fibonacci == n) {
            return true; // O número pertence à sequência de Fibonacci
        }
        a = b;
        b = fibonacci;
        fibonacci = a + b;
    }

    return false; // O número não pertence à sequência de Fibonacci
}

int main() {
    // Define a localidade para suportar UTF-8
    setlocale(LC_ALL, "pt_BR.UTF-8"); 

    int numero;

    // Entrada do número
    printf("Informe um número para verificar se ele pertence à sequência de Fibonacci: ");
    scanf("%d", &numero);

    // Verificação e exibição do resultado
    if (pertenceFibonacci(numero)) {
        printf("O número %d pertence à sequência de Fibonacci.\n", numero);
    } else {
        printf("O número %d NÃO pertence à sequência de Fibonacci.\n", numero);
    }

    return 0;
}
#include <stdio.h>     // Para printf e scanf
#include <stdbool.h>   // Para usar o tipo bool
#include <locale.h>    // Para usar setlocale

// Fun��o para verificar se o n�mero pertence � sequ�ncia de Fibonacci
bool pertenceFibonacci(int n) {
    int a = 0, b = 1;

    if (n == 0 || n == 1) {
        return true;
    }

    int fibonacci = a + b;

    while (fibonacci <= n) {
        if (fibonacci == n) {
            return true; // O n�mero pertence � sequ�ncia de Fibonacci
        }
        a = b;
        b = fibonacci;
        fibonacci = a + b;
    }

    return false; // O n�mero n�o pertence � sequ�ncia de Fibonacci
}

int main() {
    // Define a localidade para suportar UTF-8
    setlocale(LC_ALL, "pt_BR.UTF-8"); 

    int numero;

    // Entrada do n�mero
    printf("Informe um n�mero para verificar se ele pertence � sequ�ncia de Fibonacci: ");
    scanf("%d", &numero);

    // Verifica��o e exibi��o do resultado
    if (pertenceFibonacci(numero)) {
        printf("O n�mero %d pertence � sequ�ncia de Fibonacci.\n", numero);
    } else {
        printf("O n�mero %d N�O pertence � sequ�ncia de Fibonacci.\n", numero);
    }

    return 0;
}
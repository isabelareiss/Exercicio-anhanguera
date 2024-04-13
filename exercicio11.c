/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main() {
    int numero;

    // Solicitar um número inteiro positivo ao usuário
    printf("Digite um número inteiro positivo: ");
    scanf("%d", &numero);

    // Verificar se o número é positivo
    if (numero >= 0) {
        // Verificar se o número é par ou ímpar
        if (numero % 2 == 0) {
            printf("O número %d é par.\n", numero);
        } else {
            printf("O número %d é ímpar.\n", numero);
        }
    } else {
        printf("O número digitado não é positivo.\n");
    }

    return 0;
}


/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main() {
    int numero;

    // Solicitar um número entre 1 e 10 ao usuário
    do {
        printf("Digite um número entre 1 e 10: ");
        scanf("%d", &numero);

        // Verificar se o número é válido
        if (numero < 1 || numero > 10) {
            printf("Número inválido! Tente novamente.\n");
        }
    } while (numero < 1 || numero > 10);

    // Imprimir a tabuada do número fornecido
    for (int i = 1; i <= 10; i++) {
        printf("%d X %d = %d\n", numero, i, numero * i);
    }

    return 0;
}

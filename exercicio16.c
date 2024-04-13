/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main() {
    int idade;
    int contador_maiores_dezoito = 0;

    // Iterar sobre as 5 pessoas
    for (int i = 1; i <= 5; i++) {
        // Solicitar a idade da pessoa
        printf("Digite a idade da pessoa %d: ", i);
        scanf("%d", &idade);

        // Verificar se a idade é maior que 18 anos
        if (idade > 18) {
            contador_maiores_dezoito++;
        }
    }

    // Imprimir a quantidade de pessoas maiores que 18 anos
    printf("Número de pessoas maiores que 18 anos: %d\n", contador_maiores_dezoito);

    return 0;
}

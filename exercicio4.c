/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main() {
    float numero1, numero2;

    printf("Digite o primeiro número: ");
    scanf("%f", &numero1);

    printf("Digite o segundo número: ");
    scanf("%f", &numero2);

    if (numero1 > numero2) {
        printf("%.2f é maior do que %.2f\n", numero1, numero2);
    } else if (numero2 > numero1) {
        printf("%.2f é maior do que %.2f\n", numero2, numero1);
    } else {
        printf("Números iguais\n");
    }

    return 0;
}


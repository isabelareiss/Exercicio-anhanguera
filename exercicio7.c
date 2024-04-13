/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main() {
    int nota;

    // Solicitar a nota
    printf("Digite a nota da prova (0 a 100): ");
    scanf("%d", &nota);

    // Determinar o conceito correspondente à nota
    if (nota >= 90 && nota <= 100) {
        printf("A\n");
    } else if (nota >= 80) {
        printf("B\n");
    } else if (nota >= 70) {
        printf("C\n");
    } else if (nota >= 60) {
        printf("D\n");
    } else {
        printf("E\n");
    }

    return 0;
}

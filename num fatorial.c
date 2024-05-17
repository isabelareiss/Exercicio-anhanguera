/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main() {
    int num;
    unsigned long long fatorial = 1;

    printf("Digite um número para calcular seu fatorial: ");
    scanf("%d", &num);

    if (num < 0) {
    printf("Fatorial não é definido para números negativos.\n");
    } else {
    for (int i = 1; i <= num; i++) {
    fatorial *= i;
    }
    printf("O fatorial de %d é %llu\n", num, fatorial);
    }

    return 0;
}



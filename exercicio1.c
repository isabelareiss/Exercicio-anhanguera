/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

#include <stdio.h>

int main() {
    float nota1, nota2;

    printf("Digite a nota do primeiro teste: ");
    scanf("%f", &nota1);
    printf("Digite a nota do segundo teste: ");
    scanf("%f", &nota2);

    float media = (nota1 + nota2) / 2;

    if (media >= 6) {
        printf("Aprovado!\n");
    } else {
        printf("Reprovado!\n");
    }

    return 0;
}

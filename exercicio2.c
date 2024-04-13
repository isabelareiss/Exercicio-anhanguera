/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main() {
    int nota1, nota2;

    printf("Digite a nota da primeira prova: ");
    scanf("%d", &nota1);

    printf("Digite a nota da segunda prova: ");
    scanf("%d", &nota2);

    int soma = nota1 + nota2;
    float media = soma / 2.0;

    printf("A média das notas é: %.2f\n", media);

    return 0;
}

/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>


int main() {
    float notas[4];
    float soma = 0.0;
    float media;

    for (int i = 0; i < 4; i++) {
        printf("Digite a nota %d: ", i + 1);
        scanf("%f", &notas[i]);
        soma += notas[i];
    }

    media = soma / 4;
    
    printf("As notas digitadas foram:\n");
    for (int i = 0; i < 4; i++) {
        printf("%.2f ", notas[i]);
    }
    printf("\nA média das notas é: %.2f\n", media);

    return 0;
}


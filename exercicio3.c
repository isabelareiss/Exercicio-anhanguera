/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main() {
    float nota1, nota2;

    printf("Digite a nota da primeira prova: ");
    scanf("%f", &nota1);

    printf("Digite a nota da segunda prova: ");
    scanf("%f", &nota2);

    // Verificar se as notas são válidas e calcular a média
    if (nota1 >= 0.0 && nota1 <= 10.0 && nota2 >= 0.0 && nota2 <= 10.0) {
        float media = (nota1 + nota2) / 2.0;

        // Verificar a situação do aluno
        if (media >= 6.0) {
            printf("Aluno Aprovado!\n");
        } else if (media >= 4.0) {
            printf("Você está de recuperação.\n");
        } else {
            printf("Aluno Reprovado!\n");
        }
    } else {
        printf("Nota inválida! As notas devem estar entre 0.0 e 10.0.\n");
    }

    return 0;
}

/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

#include <stdio.h>

int main() {
    int numAlunos, i = 0;
    float peso, somaPesos = 0.0;

    printf("Quantos alunos você tem na sua academia? ");
    scanf("%d", &numAlunos);

    while (i < numAlunos) {
    printf("Digite o peso do aluno %d: ", i + 1);
    scanf("%f", &peso);
    somaPesos += peso;
    i++;
    }

    if (numAlunos > 0) {
    float mediaPeso = somaPesos / numAlunos;
    printf("A média de peso dos alunos é: %.2f kg\n", mediaPeso);
    } else {
    printf("Nenhum aluno foi registrado.\n");
    }

    return 0;
}


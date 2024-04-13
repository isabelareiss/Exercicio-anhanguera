/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main() {
    int mes;

    // Solicitar o número do mês ao usuário
    printf("Digite o número do mês (1 a 12): ");
    scanf("%d", &mes);

    // Verificar o número de dias no mês
    if (mes == 2) {
        printf("O mês de fevereiro tem 28 dias.\n");
    } else if (mes == 4 || mes == 6 || mes == 9 || mes == 11) {
        printf("O mês tem 30 dias.\n");
    } else if (mes >= 1 && mes <= 12) {
        printf("O mês tem 31 dias.\n");
    } else {
        printf("Número de mês inválido.\n");
    }

    return 0;
}

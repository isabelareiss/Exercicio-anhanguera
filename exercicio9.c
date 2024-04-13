/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <math.h>

int main() {
    float numero;

    // Solicitar o número ao usuário
    printf("Digite um número: ");
    scanf("%f", &numero);

    // Verificar se o número é positivo
    if (numero >= 0) {
        // Calcular a raiz quadrada do número
        float raiz_quadrada = sqrt(numero);
        printf("A raiz quadrada de %.2f é: %.2f\n", numero, raiz_quadrada);
    } else {
        // Caso o número seja negativo, exibir uma mensagem de erro
        printf("Número inválido! O número deve ser positivo.\n");
    }

    return 0;
}

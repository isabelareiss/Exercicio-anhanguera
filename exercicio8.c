/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main() {
    int codigo;
    float preco, valor_total;
    int quantidade;

    // Solicitar o código do produto e a quantidade
    printf("Digite o código do produto: ");
    scanf("%d", &codigo);
    printf("Digite a quantidade: ");
    scanf("%d", &quantidade);

    // Determinar o preço do produto com base no código
    switch (codigo) {
        case 100:
            preco = 1.20;
            break;
        case 101:
            preco = 1.30;
            break;
        case 102:
            preco = 1.50;
            break;
        case 103:
            preco = 1.20;
            break;
        case 104:
            preco = 1.70;
            break;
        case 105:
            preco = 2.20;
            break;
        case 106:
            preco = 1.00;
            break;
        default:
            printf("Código de produto inválido!\n");
            return 1; // Encerrar o programa com código de erro
    }

    // Calcular o valor total a ser pago
    valor_total = preco * quantidade;

    // Imprimir o valor total a ser pago
    printf("Valor total a ser pago: %.2f\n", valor_total);

    return 0;
}

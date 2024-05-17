/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

#include <stdio.h>

int main() {
    int opcao;
    float saldo = 0.0;
    float valor;

    do {
    
        printf("\nMenu de opções:\n");
        printf("1- Consulta de saldo\n");
        printf("2- Saque\n");
        printf("3- Depósito\n");
        printf("4- Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

    switch (opcao) {
    case 1:
    
    printf("Seu saldo é: R$ %.2f\n", saldo);
    break;

    case 2:
    
    printf("Digite o valor para saque: R$ ");
    scanf("%f", &valor);
    if (valor > saldo) {
    printf("Saldo insuficiente!\n");
    } else {
    saldo -= valor;
    printf("Saque de R$ %.2f realizado com sucesso!\n", valor);
}
    break;

    case 3:
    
    printf("Digite o valor para depósito: R$ ");
    scanf("%f", &valor);
    saldo += valor;
    printf("Depósito de R$ %.2f realizado com sucesso!\n", valor);
    break;

    case 4:

    printf("Saindo...\n");
    break;

    default:
    printf("Opção inválida! Tente novamente.\n");
    break;
}
    } while (opcao != 4);

    return 0;
}



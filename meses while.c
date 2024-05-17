/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

#include <stdio.h>

int main() {
    int mes;
    char *nomesMeses[] = {"Janeiro", "Fevereiro", "Março", "Abril", "Maio", "Junho", 
                    "Julho", "Agosto", "Setembro", "Outubro", "Novembro", "Dezembro"};
    
    while(1) {
    printf("Digite um número entre 1 e 12 para obter o nome do mês: ");
    scanf("%d", &mes);

    if(mes >= 1 && mes <= 12) {
    printf("O mês %d é %s.\n", mes, nomesMeses[mes - 1]);
    break;
    } else {
    printf("Valor inválido! Por favor, digite um número entre 1 e 12.\n");
    }
    }

    return 0;
}



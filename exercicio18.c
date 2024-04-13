/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main() {
    int senha_digitada[4];
    int correta = 0; // Flag para indicar se a senha está correta

    // Solicitar a senha ao usuário e verificar se está correta
    do {
        printf("Digite a senha (4 números inteiros separados por espaço): ");
        scanf("%d %d %d %d", &senha_digitada[0], &senha_digitada[1], &senha_digitada[2], &senha_digitada[3]);

        // Verificar se a senha está correta
        correta = (senha_digitada[0] == 1 && senha_digitada[1] == 2 && senha_digitada[2] == 3 && senha_digitada[3] == 4);

        // Se a senha estiver incorreta, exibir mensagem e solicitar novamente
        if (!correta) {
            printf("Senha incorreta! Tente novamente.\n");
        }
    } while (!correta); // Repetir enquanto a senha estiver incorreta

    // Se a senha estiver correta, exibir mensagem de sucesso
    printf("Senha correta!\n");

    return 0;
}

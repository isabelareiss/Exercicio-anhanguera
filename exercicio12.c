/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main() {
    char letra;

    // Solicitar uma letra ao usuário
    printf("Digite uma letra minúscula: ");
    scanf(" %c", &letra);

    // Verificar se a letra é uma vogal ou consoante usando switch/case
    switch (letra) {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            printf("A letra %c é uma vogal.\n", letra);
            break;
        default:
            printf("A letra %c é uma consoante.\n", letra);
            break;
    }

    return 0;
}

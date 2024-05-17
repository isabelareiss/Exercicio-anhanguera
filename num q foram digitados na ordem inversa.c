/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

#include <stdio.h>

int main() {
    int vetor[5];

    for (int i = 0; i < 5; i++) {
    printf("Digite o número %d: ", i + 1);
    scanf("%d", &vetor[i]);
    }


    printf("Os números digitados na ordem inversa são:\n");
    for (int i = 4; i >= 0; i--) {
    printf("%d ", vetor[i]);
    }
    printf("\n");

    return 0;
}


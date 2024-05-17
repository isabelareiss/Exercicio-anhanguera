/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main() {
    int numeros[5];
    int pares[5];
    int impares[5];
    int contadorPares = 0;
    int contadorImpares = 0;

    printf("Digite 5 números inteiros:\n");
    for (int i = 0; i < 5; i++) {
    printf("Número %d: ", i + 1);
    scanf("%d", &numeros[i]);
}

    for (int i = 0; i < 5; i++) {
    if (numeros[i] % 2 == 0) {
    pares[contadorPares] = numeros[i];
    contadorPares++;
    } else {
    impares[contadorImpares] = numeros[i];
    contadorImpares++;
}
}


    printf("Vetor de todos os números:\n");
    for (int i = 0; i < 5; i++) {
    printf("%d ", numeros[i]);
}
    printf("\n");

    printf("Vetor de números pares:\n");
    for (int i = 0; i < contadorPares; i++) {
    printf("%d ", pares[i]);
}
    printf("\n");

    printf("Vetor de números ímpares:\n");
    for (int i = 0; i < contadorImpares; i++) {
    printf("%d ", impares[i]);
}
    printf("\n");

    return 0;
}


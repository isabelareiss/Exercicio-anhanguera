/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <ctype.h>

int main() {
    char caracteres[10];
    char consoantes[10];
    int contadorConsoantes = 0;

    printf("Digite 10 caracteres:\n");
    for (int i = 0; i < 10; i++) {
    printf("Caractere %d: ", i + 1);
    scanf(" %c", &caracteres[i]);

    caracteres[i] = tolower(caracteres[i]);
    }

    for (int i = 0; i < 10; i++) {
    if (isalpha(caracteres[i]) && !(caracteres[i] == 'a' || caracteres[i] == 'e' || caracteres[i] == 'i' || caracteres[i] == 'o' || caracteres[i] == 'u')) {
    consoantes[contadorConsoantes] = caracteres[i];
    contadorConsoantes++;
}
}

    printf("Foram lidas %d consoantes.\n", contadorConsoantes);
    if (contadorConsoantes > 0) {
    printf("As consoantes são: ");
    for (int i = 0; i < contadorConsoantes; i++) {
    printf("%c ", consoantes[i]);
}
    printf("\n");
    } else {
    printf("Nenhuma consoante foi lida.\n");
    }

    return 0;
}


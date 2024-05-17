/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

#include <stdio.h>

int main() {
    int vetor1[5], vetor2[5], vetor3[10];
    
    printf("Digite os elementos do primeiro vetor:\n");
    for (int i = 0; i < 5; i++) {
    printf("Elemento %d: ", i + 1);
    scanf("%d", &vetor1[i]);
}
    
   
    printf("\nDigite os elementos do segundo vetor:\n");
    for (int i = 0; i < 5; i++) {
    printf("Elemento %d: ", i + 1);
    scanf("%d", &vetor2[i]);
}
    
    int index_vetor3 = 0;
    for (int i = 0; i < 5; i++) {
    vetor3[index_vetor3] = vetor1[i];
    vetor3[index_vetor3 + 1] = vetor2[i];
    index_vetor3 += 2;
}
    
 
    printf("\nTerceiro vetor intercalado:\n");
    for (int i = 0; i < 10; i++) {
        printf("%d ", vetor3[i]);
    }
    printf("\n");

    return 0;
}



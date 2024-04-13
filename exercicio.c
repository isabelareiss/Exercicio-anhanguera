/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main(void)
{
  //Declaração das variáveis
  int nota1, nota2, media;
  
  //Entrada de dados
  printf("Digite a primeira nota do aluno: ");
  scanf("%i",&nota1);
  
  printf("Digite a segunda nota do aluno: ");
  scanf("%i",&nota2);
  
  //Processamento
  media = (nota1 + nota2) / 2;
  
  //Saída
  printf("Media do aluno = %i\n",media);
  
}
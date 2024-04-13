/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main() {
    float num1, num2;
    char operador;
    float resultado;

    // Solicitar os dois números reais ao usuário
    printf("Digite o primeiro número real: ");
    scanf("%f", &num1);

    printf("Digite o segundo número real: ");
    scanf("%f", &num2);

    // Solicitar o operador ao usuário
    printf("Digite o operador (+, -, * ou /): ");
    scanf(" %c", &operador);

    // Verificar e executar a operação indicada pelo operador
    if (operador == '+' || operador == '-' || operador == '*' || operador == '/') {
        if (operador == '/' && num2 == 0) {
            printf("Divisão por zero não é permitida.\n");
        } else {
            switch (operador) {
                case '+':
                    resultado = num1 + num2;
                    break;
                case '-':
                    resultado = num1 - num2;
                    break;
                case '*':
                    resultado = num1 * num2;
                    break;
                case '/':
                    resultado = num1 / num2;
                    break;
            }
            printf("Resultado: %.2f\n", resultado);
        }
    } else {
        printf("Operador inválido.\n");
    }

    return 0;
}

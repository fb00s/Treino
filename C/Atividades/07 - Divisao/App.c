/* O programa deve solicitar que o usuário digite um número e depois digite outro número, e deverá retornar então a divisão dos dois números
conforme exemplo abaixo:
-------------------------Exemplo de execução-----------------------
Output: Digite um numero
Input: 72
Output: Digite outro numero
Input: 4
Output: 72 / 4 = 18
-------------------------Fim do programa---------------------------
*/

#include <stdio.h>

int main(){
    double num1;
    double num2;

    printf("Digite um numero\n");
    scanf("%lf", &num1);

    printf("Digite outro numero\n");
    scanf("%lf", &num2);

    double divisao = num1 / num2;

    printf("%.2f / %.2f = %.2f", num1, num2, divisao);

    return 0;
}
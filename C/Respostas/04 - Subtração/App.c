/* O programa deve solicitar que o usuário digite um número e depois digite outro número, e deverá retornar então a diferença dos dois números
conforme exemplo abaixo:
-------------------------Exemplo de execução-----------------------
Output: Digite um numero
Input: 8
Output: Digite outro numero
Input: 5
Output: 8 - 5 = 3
-------------------------Fim do programa---------------------------
*/

#include <stdio.h>

int main(){
    int num1;
    int num2;

    printf("Digite um numero\n");
    scanf("%d", &num1);

    printf("Digite outro numero\n");
    scanf("%d", &num2);

    int resultado = num1 - num2;

    printf("%d - %d = %d", num1, num2, resultado);

    return 0;
}
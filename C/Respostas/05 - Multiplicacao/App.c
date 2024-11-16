/* O programa deve solicitar que o usuário digite um número e depois digite outro número, e deverá retornar então o produto dos dois números
conforme exemplo abaixo:
-------------------------Exemplo de execução-----------------------
Output: Digite um numero
Input: 5
Output: Digite outro numero
Input: 7
Output: 5 x 7 = 35
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

    int produto = num1 * num2;

    printf("%d x %d = %d", num1, num2, produto);

    return 0;
}
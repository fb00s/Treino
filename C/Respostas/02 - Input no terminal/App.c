/* O programa deve perguntar o nome do usuário e o dê as boas vindas ao programa conforme exemplo abaixo:
-----------------Exemplo de execução-----------------
Output: Qual o seu nome?
Input: Felipe
Output: Ola, Felipe
------------------Fim do programa--------------------
*/

#include <stdio.h>

int main(){
    char nomeUsuario[50];

    printf("Qual o seu nome?\n");
    scanf("%s", nomeUsuario);

    printf("Ola, %s", nomeUsuario);

    return 0;
}
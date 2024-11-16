/* O programa deve gravar um número secreto entre 1 e 100, e o usuário deverá tentar acertá-lo. O programa deve informar caso o usuário acerte, e informar quantas tentativas ele
levou. E caso ele erre, o programa deve informar se o chute foi maior ou menor que o número secreto. 
----------------------------Exemplo de execução-------------------------------------
Output: Digite um numero entre 1 e 100
Input: 41
Output: O numero secreto eh maior que 41
Input: 43
Output: O numero secreto eh menor que 43
Input: 42
Output: Voce acertou! Voce descobriu o numero secreto em 3 tentativas
---------------------------Fim do programa------------------------------------------
*/

#include <stdio.h>
#include <string.h>

int main(){
    const int numeroSecreto = 42;
    const int numeroMaximo = 100;
    int tentativas = 1;
    int chute = 0;

    printf("Digite um numero entre 1 e %d\n", numeroMaximo);

    while(chute != numeroSecreto){
        scanf("%d", &chute);

        if(chute == numeroSecreto){
            break;
        } else {
            if (chute > numeroSecreto){
                printf("O numero secreto eh menor que %d\n", chute);
            } else {
                printf("O numero secreto eh maior que %d\n", chute);
            }
            printf("Tente novamente\n");
            tentativas++;
        }
    }
    char palavraTentativas[20] = "";
    strcpy(palavraTentativas, (tentativas > 1) ? "tentativas" : "tentativa");
    printf("Voce acertou! Voce descobriu o numero secreto em %d %s", tentativas, palavraTentativas);

    return 0;

}
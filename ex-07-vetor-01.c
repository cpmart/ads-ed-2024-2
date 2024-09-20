#include <stdio.h>

int main()
{
    int vetor[5], i;
    // Preenchendo na unha
 /*   vetor[0] = 60;
    vetor[1] = 20;
    vetor[2] = 30;
    vetor[3] = 40;
    vetor[4] = 50;
    printf("%d\n", vetor[0]);
    printf("%d\n", vetor[1]);
    printf("%d\n", vetor[2]);
    printf("%d\n", vetor[3]);
    printf("%d\n", vetor[4]);

    // Preenchendo no scanf
    printf("Digite o valor: ");
    scanf("%d", &vetor[0]);
    printf("Digite o valor: ");
    scanf("%d", &vetor[1]);
    printf("Digite o valor: ");
    scanf("%d", &vetor[2]);
    printf("Digite o valor: ");
    scanf("%d", &vetor[3]);
    printf("Digite o valor: ");
    scanf("%d", &vetor[4]);

    printf("%d\n", vetor[0]);
    printf("%d\n", vetor[1]);
    printf("%d\n", vetor[2]);
    printf("%d\n", vetor[3]);
    printf("%d\n", vetor[4]);
*/
    // Preencher como se deve...
    for (i = 0; i < 5; i++)
    {
        vetor[i] = i*10;
    }
    for (i = 0; i < 5; i++)
    {
        printf("vetor[%d] = %d\n",i,vetor[i]);
    }
}
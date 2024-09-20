#include <stdio.h>

//Protótipo = declaração de uma função
void mudarValor(int *pnumero); 

int main(){
    int numero;
    numero = 10;
    mudarValor(&numero);
    printf("Novo número: %d\n", numero);
}

void mudarValor(int *pnumero){
    printf("Digite um valor: ");
    scanf("%d",&*pnumero);
    scanf("%d",pnumero);
    scanf("%d",&*&*pnumero);
}

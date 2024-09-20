#include <stdio.h>

int main(){
    int valor, *pontValor;
    pontValor = &valor;
    valor = 10;
    *pontValor = 20;
    printf("Endereço de valor: %p\n",&valor);
    printf("Endereço de pontValor: %p\n",pontValor);
    printf("Valor de valor: %d\n",valor);
    printf("Valor de pontValor: %d\n",*pontValor);
}
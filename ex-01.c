#include <stdio.h>

int main(){
    float temperatura;
    printf("Digite a temperatura: ");
    scanf("%f",&temperatura);
    if (temperatura < 20)
        printf("Está frio!!!\n");
    else if (temperatura < 30)  
        printf("Está agradável!!!\n");
    else 
        printf("Está quente!!!\n");      
}

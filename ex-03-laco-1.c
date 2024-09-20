#include <stdio.h>

int main(){
    float nota1, nota2, nota3, media=0, mediaTotal=0;
    int codigo=1, cont=0;
    while(codigo!=0){
        printf("Digite o código (positivo): ");
        scanf("%d",&codigo);
        media=0;
        if(codigo>0){
            printf("Digite as 3 notas: ");
            scanf("%f%f%f",&nota1,&nota2,&nota3);
            if(nota1 >=0 && nota1<=10 && nota2 >=0 && nota2<=10 && nota3 >=0 && nota3<=10){
                media = (nota1+nota2+nota3)/3;
                cont++;    
            }   
            else   
                printf("Nota inválida!!!\n");         
        }
        mediaTotal+=media;
    }
    printf("A média da turma é: %g\n",mediaTotal/cont);
}
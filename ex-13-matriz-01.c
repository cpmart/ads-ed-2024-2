#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define L 3
#define C 3


int main(){
    int matriz[L][C], acc, vet[C]={0}, somaDiagonal=0, maior, menor, media, aux;
    srand(time(NULL));
    for(int i=0; i<L; i++){
        for(int j=0; j<C; j++){ 
            matriz[i][j]=rand()%11;
        }
    }
    maior = menor = matriz[0][0];
    media = 0;
    for(int i=0; i<L; i++){
        acc=0;
        somaDiagonal+=matriz[i][i];
        for(int j=0; j<C; j++){ 
            printf("%2d  ",matriz[i][j]);
            acc+=matriz[i][j];
            vet[i]+=matriz[j][i];
            maior = matriz[i][j] > maior ? matriz[i][j] : maior; 
            menor = matriz[i][j] < menor ? matriz[i][j] : menor; 
        }
        media += acc;
        printf("=  %d\n",acc);
    }
    printf("------------\n");
    for(int i=0; i<C; i++)
        printf("%2d  ",vet[i]);
    printf("\n\nSoma da diagonal principal: %d \n",somaDiagonal);
    printf("\nMaior: %d \n",maior);
    printf("\nMenor: %d \n",menor);
    printf("\nMédia: %g \n",(float)media/(L*C));

    for(int i=0; i<L; i++){
        for(int j=0; j<C; j++){ 
            for(int l=0; l<L; l++){
                for(int c=0; c<C; c++){ 
                    if(matriz[l][c]>matriz[i][j]){
                        aux = matriz[i][j];
                        matriz[i][j] = matriz[l][c];
                        matriz[l][c] = aux;
                    }
                }
            }
        }
    }
    printf("\n----- Matriz ordenada -----\n");
    for(int i=0;i<L;i++){
        for(int j=0;j<C;j++){
            printf("%d  ",matriz[i][j]);
        }
        printf("\n");
    }
}
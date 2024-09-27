#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 5

int main(){
    int A[N], B[N];
    srand(time(NULL));
    for(int i=0; i<N; i++){
        A[i]=rand()%51;
        printf("%d",A[i]);
    }
    for(int i=0;i<N;i++){
        B[N-1-i] = A[i]*A[i];    
    }/*
    for(int i=0, j=N-1;i<N;i++,j--){
        B[j] = A[i]*A[i];    
    }
    int j=N-1;
    for(int i=0; i<N; i++){
        B[j--] = A[i]*A[i];    
    }*/
}
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 5

int main()
{
    int A[N], B[N];
    srand(time(NULL));
    for (int i = 0; i < N; i++){ //preenchendo o vetor A
        A[i] = rand() % 51;
    }
    for (int i = 0; i < N; i++){ //preenchendo o vetor B com o dobro de A
        B[i] = A[i] * 2;
    }
    for (int i = 0; i < N; i++){ //mostrando os 2 vetores
        printf("%2d - %2d\n", A[i], B[i]);
    }
}
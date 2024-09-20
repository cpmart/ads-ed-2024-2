#include <stdio.h>

int main(){
    int x=0;
    while(x<10){
        printf("%d\n",x);
        x++;
    }
    
    x=0;
    do{
        printf("%d\n",x);
        x++;
    }while(x<10);
    
    for(x=0;x<10;x+=5)
        printf("%d\n",x);
}
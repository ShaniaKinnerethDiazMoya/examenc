#include <stdio.h>

int main (){
    int x, i=0, y;
    printf("Dame el numero que quieres utilizar");
    scanf("%d", &x);
    puts("Incremento");
    while(i<=1000){
        y=x*i;
        printf("%d*%d=%d   \n", i, x, y);
        i++;
    }
    puts("Decremento");
    i=1000;
    while(i>=0){
        y=x*i;
        printf("%d*%d=%d   \n", i, x, y);
        i--;
    }
    return  0;
}
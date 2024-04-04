#include <stdio.h>
int main (){
    float ar1, ar2, ar3, art;
    printf("Dame el numero de la primera arista \n");
    scanf("%f", &ar1);
    printf("Dame el numero de la segunda arista \n");
    scanf("%f", &ar2);
    printf("Dame el numero de la tercera arista \n");
    scanf("%f", &ar3);
    ar1=ar1*ar1;
    ar2=ar2*ar2;
    ar3=ar3*ar3;
    if(ar1>ar2 & ar1>ar3){
        art=ar2+ar3;
        if(ar1==art){
            puts("EL triangulo es rectangulo \n");
        }else{
            printf("El triangulo no es rectangulo \n");
        }
    }else if(ar2>ar1 & ar2>ar3){
        art=ar1+ar3;
        if(ar2==art){
            puts("EL triangulo es rectangulo \n");
        }else{
            printf("El triangulo no es rectangulo \n");
        }
    }else if(ar3>ar2 & ar3>ar1){
        art=ar2+ar1;
        if(ar3==art){
            puts("EL triangulo es rectangulo \n");
        }else{
            printf("El triangulo no es rectangulo \n");
        }
    }
    puts("Fin del programa");
    return 0;
}
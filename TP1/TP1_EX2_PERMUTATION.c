#include<stdio.h>



int main(){
    int x,y,z,t;

    printf("Donner un entier: ");
    scanf("%d", &x);

    printf("Donner un autre entier: ");
    scanf("%d", &y);

    printf("Donner un autre troisieme: ");
    scanf("%d", &z);

    t = y;
    y = x;
    x = z;
    z = t;

    printf("%d : %d : %d",x,y,z);

    
}
#include<stdio.h>



int main(){
    int m;
    printf("Veuillez donner un montant : ");
    scanf("%d", m);

    printf("%d * 200DH + " , m/200);
    m = m % 200;

    printf("%d * 100DH + " , m/100);
    m = m % 100;
    
    printf("%d * 50DH + " , m/50);
    m = m % 50;

    printf("%d * 20DH + " , m/20);
    m = m % 20;

    printf("%d * 10DH + " , m/10);
    m = m % 10;

    printf("%d * 2DH + " , m/2);
    m = m % 2;

    printf("%d * 1DH" , m);

}
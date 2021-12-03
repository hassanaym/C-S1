#include<stdio.h>



int main(){
    int x,y;
    printf("Donner deux entier : ");
    scanf("%d", &x);
    scanf("%d", &y);

    if(x==0 || y==0){
        printf("Le produit est null");
    }else if((x>0 && y>0) || (x<0 && y<0)){
        printf("Le produit est positif");
    }else {
        printf("Le produit est negatif");
    }

}
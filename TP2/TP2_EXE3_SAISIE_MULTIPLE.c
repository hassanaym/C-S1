#include<stdio.h>

#include "yassin.h"

int main(){
    int nb=0, v, min ,max ,pmin, pmax, somme=0;

    do{
        printf("Donner uen valeur entiere: ");
        scanf("%d", &v);
        if(v!=0){
            somme+=v; //somme = somme + v
            nb++;
            if(nb==1){
                min = v;
                max = v;
                pmin = 1;
                pmax = 1;
            }else{
                if (v>max) {
                    max = v;
                    pmax =nb;
                }
                if (v<min) {
                    min = v;
                    pmin = nb;
                }
            }
        }
        
    }while(v!=0);

    printf("La somme = %d\n", somme);
    printf("Le plus petit est %d, sa position est %d\n", min,pmin);
    printf("Le plus grand est %d, sa position est %d\n", max,pmax);
    printf("La moyenne est %.2f", (float)somme/(float)nb);
    //comment
    /*
        comment1
        comment2
    */
}
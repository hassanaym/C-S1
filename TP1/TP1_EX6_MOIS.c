#include<stdio.h>
#include<stdlib.h>


int main(){
    int mois;
    int annee;
    printf("Donner le code du mois : ");
    scanf("%d", &mois);
    
    switch(mois){
        case 1:
            printf("Janvier : 31 Jours");
            break;
        case 2:
            printf("Donner l'annee : ");
            scanf("%d", &annee);

            if (annee % 4 == 0){
                printf("Fevrier : 29 jours");
            }else{
                printf("Fevrier : 28 jours");
            }
            break;
        case 3:
            printf("Mars");
            break;
        case 4:
            printf("Avril");
            break;
        case 5:
            printf("Mai");
            break;
        case 6:
            printf("Juin");
            break;
        case 7:
            printf("Juillet");
            break;
        case 8:
            printf("aout");
            break;
        case 9:
            printf("Septembre");
            break;
        case 10:
            printf("Octobre");
            break;
        case 11:
            printf("Novembre");
            break;
        case 12:
            printf("Decembre");
            break;
        default:
        printf("Ce mois n'existe pas");
    }
}
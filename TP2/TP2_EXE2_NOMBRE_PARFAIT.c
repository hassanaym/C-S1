#include<stdio.h>


int main(){
    int n,sd=1,i;
    printf("Veuillez donner un entier:");
    scanf("%d", &n);

    for(i=2; i<=n/2 ;i++){
        if(n%i == 0){
            sd = sd +i;
        }
    }

    if(n == sd){   
        printf("%d est parfait",n);
    }else{
        printf("%d n'est parfait",n);
    }

}
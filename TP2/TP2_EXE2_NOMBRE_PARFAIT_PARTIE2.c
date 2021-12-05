#include<stdio.h>


int main(){
    int n,sd,i;
        
    for(n=1; n<=1000; n++){
        sd=1;
        for(i=2; i<=n/2 ;i++){
            if(n%i == 0){
                sd = sd +i;
            }
        }

        if(n == sd){   
            printf("%d\n",n);
        }
    }
       
}
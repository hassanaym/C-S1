#include<stdio.h>


int main(){
    double pi=1.0;
    char o = '-';
    int i;

    for(i=3; i<10000; i=i+2){
        if (o == '-'){
            pi -= 1/(double)i;
            o = '+';
        }else{
            pi += 1/(double)i;
            o = '-';
        }
    }

    printf("%lf" , pi*4);
}
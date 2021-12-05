#include<stdio.h>
void tableMultiplication(int n){
    int i;
    for(i=1; i<=10; i++){
        printf("%d * %d = %d\n", n, i, n*i);
    }
}

void tableMultiplicationEntiere(){
    int i,n;
    for(n=1; n<=10; n++){
        for(i=1; i<=10; i++){
            printf("%d * %d = %d\n", n, i, n*i);
        }
        printf("\n------------\n");
    }
}
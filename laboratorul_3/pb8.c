#include<stdio.h>
int main(){

    int x, copie, sum = 0;
    int cifre[10]; 
    int i = 0;

    printf("x = ");
    scanf("%d", &x);

    copie = x;

    while(copie > 0){
        cifre[i] = copie % 10;
        sum += cifre[i];
        copie = copie / 10;
        i++;
    }

    for(int j = 0; j < i; j++){
        printf("%d", cifre[j]);
        if(j < i-1){
            printf("+");
        }
    }
    printf("=%d\n", sum);
    return 0;

}
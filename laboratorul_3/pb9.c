#include<stdio.h>

int main(){

    int x, sum = 0;
    int div[100];
    int j = 0;
    printf("x = ");
    scanf("%d", &x);

    for(int i = 1; i <= x; i++){
        if(x % i == 0){
            div[j] = i;
            sum += i;
            j++;
        }
    }

    for(int i = 0; i < j; i++){
        printf("%d", div[i]);
        if(i < j - 1){
            printf("+");
        }
    }
    printf("=%d\n", sum);


    return 0;

}
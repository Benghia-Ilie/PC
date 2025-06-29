#include<stdio.h>

int main(){

    int x;
    int sum = 0;
    printf("x = ");
    scanf("%d", &x);
    printf("s =");
        for(int i = 0; i < x; i++){
            printf(" %d +", i);
            sum = sum + i;
        }
        printf(" %d = %d\n", x, sum + x);
    
    return 0;
}
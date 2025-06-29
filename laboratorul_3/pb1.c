#include<stdio.h>

int main(){

    int n;
    printf("n = ");
    scanf("%d", &n);

    int s = n/10;
    if(n > 10){
        while(n >= 10){
            printf("%d ", n);
            n -= s;
        }
    }else{
        printf("numarul introdus este mai mic decat 10");
    }
    
    return 0;
}
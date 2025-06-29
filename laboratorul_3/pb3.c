#include<stdio.h>

int main(){

    int n;
    printf("n = ");
    scanf("%d", &n);

    if(n>1){
        for(int i = 0; i < n; i++){
            if(i == 0 || i == n-1){
                for(int j = 0; j < n; j++){
                    printf("*");
                }
            }
            else{
                for(int j = 0; j < n; j++){
                    if(j == 0 || j == n-2){
                        printf("*");
                    }
                    printf(" ");
                }
            }
            printf("\n");
        }
    }
    else{
        printf("nr introdus e prea mic.\n");
    }
    return 0;
}
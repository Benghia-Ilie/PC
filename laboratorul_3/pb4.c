#include<stdio.h>

int main(){

    int n;
    printf("n = ");
    scanf("%d", &n);

    if(n>1){
        for(int i = 0; i< n; i++){
            for(int j = 0; j<n;j++){
                if(j == 0 || j == n-1 || j == i){
                    printf("*");
                }else{
                    printf(" ");
                }
            }
            printf("\n");
        }
    }else{
        printf("nr introdus e prea mic.\n");
    }
    return 0;
}
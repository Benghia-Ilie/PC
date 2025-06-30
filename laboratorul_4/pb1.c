#include<stdio.h>
void linie_verticala(int n){
    for(int i = 0; i < n/2 - 1; i++){
        for(int j = 0; j < n; j++){
            if(j == 0 || j == n-1){
                printf("*");
            }  
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
}

void linie_orizontala(int n){
    for(int i = 0; i < n; i++){
        if(i == 0){
            for(int j = 0; j < n; j++){
                printf("*");
            }
        }
    }
    printf("\n");
}
int main(){
    int n;

    printf("n = ");
    scanf("%d", &n);
    linie_orizontala(n);
    linie_verticala(n);
    linie_orizontala(n);
    linie_verticala(n);
    linie_orizontala(n);

    return 0;
}
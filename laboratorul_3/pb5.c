#include<stdio.h>

int main(){

    int m, n;
    int temp = 0;
    printf("m = ");
    scanf("%d", &m);
    printf("n = ");
    scanf("%d", &n);

    if(n <= 0 && m <= 0 ){
        printf("eroare");
        return 1;
    }

    for(int i = 0; i <=m; i++){
        printf(" %d", temp);
        temp++;
        if(temp > n){
            temp = 0;
        }
    }

    return 0;
}
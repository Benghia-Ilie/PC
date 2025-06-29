#include<stdio.h>

int main(){


    int n;
    int x;
    int nr[100];
    int min = 100000;
    int max = -100000;
    int sum = 0;
    printf("n = ");
    scanf("%d", &n);

    for(int i = 0 ; i < n; i++){
        scanf("%d", &x);
        nr[i] = x;
    }

    printf("nr introduse sunt = ");
    for(int j = 0; j < n; j++){
        printf("%d ", nr[j]);
        sum += nr[j];
        if(nr[j] < min){
            min = nr[j];
        }
        if(nr[j] > max){
            max = nr[j];
        }
    }
    printf("\n");
    printf("numarul minim este = %d", min);
    printf("\n");
    printf("numarul maxim este = %d", max);
    printf("\n");
    printf("suma numerelor este = %d", sum);

    return 0;
}
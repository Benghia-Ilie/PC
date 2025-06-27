#include<stdio.h>

int main(){

    int x;
    printf("x = ");
    scanf("%d", &x);

    int x1 = x;
    int x2 = x;

    if(x % 2 == 0){
        printf(" %d si %d.\n",x1 - 1, x2 - 3 );
    }
    else{
        printf(" %d si %d.\n", x1 - 2, x2 - 4);
    }
    return 0;
}
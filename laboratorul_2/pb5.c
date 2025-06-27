#include<stdio.h>

int main(){

    int x, y;
    printf("x = ");
    scanf("%d", &x);
    printf("y = ");
    scanf("%d", &y);

    if(x >= 0 && y >= 0){
        printf("numerele au acelasi semn.\n");
    }
    else{
        if(x < 0 && y < 0){
           printf("numerele au acelasi semn.\n"); 
        }
        else{
            printf("numerele nu au ecelasi semn.\n");
        }
    }
    return 0;
}
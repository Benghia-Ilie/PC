#include<stdio.h>

int main(){
    int x;

    while(1){
        printf("introducti un nr de tastatura ");
        scanf("%d", &x);

        if(x < 0){
            printf("eroare, introduceti alt nr ");
        } else if(x > 0){
            if(x % 2 == 0){
                printf("numarul este par.\n");
            }
            else{
                printf("numarul este impar.\n");
            }
            } else {
                printf("Program terminat.\n");
                break;
            }
        }
    return 0;
}
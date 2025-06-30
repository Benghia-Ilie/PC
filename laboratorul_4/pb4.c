#include<stdio.h>
void polinom(int n){

    for(int i = n; i >= 0; i--){
        if(i == 0){
            printf("+1");
        }
        else{
            if(i == 1){
                printf("+x");
            }
            else{
                if(i == n){
                    printf("x^%d", i);
                }else{
                    printf("+x^%d", i);
                }
                
            }
        }
    }
}
int main(){


    int n;
    printf("introduceti numarul = ");
    scanf("%d", &n);

    polinom(n);
    printf("\n");


    return 0;
}
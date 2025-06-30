#include<stdio.h>
void numar(int n){

    if(n >= 0 && n <= 9){
        printf("nr introdus este %d\n", n);
    }
    else{
        if(n >= 10 && n <= 15){
            printf("%c\n", 'A' + (n-10));
        }
        else{
            printf("numarul nu este corect");
        }
    }
}
int main(){

    int n;
    printf("n = ");
    scanf("%d", &n);

    numar(n);

    return 0;
}
#include<stdio.h>

int main(){

    int x,c1, c2, c3;
    int count = 0;
    printf("x = ");
    scanf("%d", &x);
    if(x < 100 || x > 999){
        printf("numarul introdus nu este de trei cifre.\n");
        return 1;
    }

    c1 = x / 100;
    c2 = (x/10) % 10;
    c3 = x % 10;

    if(c1 % 2 != 0) count++;
    if(c2 % 2 != 0) count++;
    if(c3 % 2 != 0) count++;

    printf("numarul numerelor impare este = %d\n", count);

    return 0;
}
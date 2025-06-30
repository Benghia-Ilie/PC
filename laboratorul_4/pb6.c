#include<stdio.h>
int functie(int n, int b, int c){

    int nr = 0;

    if(c < 0 || c >= b){
        perror("c nu apartine intervalului [0,b)");
        return -1;
    }
   
    while(n > 0){
        if(n % b == c){
            nr++;
        }
        n /= b;
    }

    return nr;
    
}

int main(){

    int n, b,c;
    printf("n = ");
    scanf("%d", &n);
    printf("c = ");
    scanf("%d", &c);
    printf("b = ");
    scanf("%d", &b);


    int rezultat = functie(n, b, c);

    printf("%d apare de %d ori in %d scris in baza %d",c, rezultat, n, b);


    return 0;
}
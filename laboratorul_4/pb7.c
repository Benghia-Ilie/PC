#include<stdio.h>
int functie(int p, int a){

    int putere = 1;
    int rezultat = a % p;

    while(rezultat != 1){
        rezultat = (rezultat * a) % p;
        putere++;
    }

    return putere;
}
int main(){


    int p, a;
    printf("p = ");
    scanf("%d", &p);
    printf("a = ");
    scanf("%d", &a);

    int rez = functie(p, a);

    printf("%d", rez);
    printf("\n");
    


    return 0;


}
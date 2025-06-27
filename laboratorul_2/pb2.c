#include<stdio.h>

int main(){

    float x, y;

    printf("introduceti nr kg de mere ");
    scanf("%f", &x);
    printf("\n");
    printf("introduceti nr kg de pere ");
    scanf("%f", &y);
    printf("\n");

    if(((5 * x) + (7 * y)) <= 20){
        printf("ne ajung banii pt fructe, pretul total este %f",((5 * x) + (7 * y)) );
    }
    else{
        printf("nu ne ajung banii pt fructe, preturl total este %f", ((5 * x) + (7 * y)));
    }

    return 0;
}
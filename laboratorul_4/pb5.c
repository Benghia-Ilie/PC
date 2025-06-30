#include<stdio.h>
void numere(float a, float b, float c){

    int temp;

    if(a < b){
        temp = a;
        a = b; 
        b = temp;
    }
    if(a < c){
        temp = a;
        a = c;
        c = temp;
    }
    if(b < c){
        temp = b; 
        b = c; 
        c = temp;
    }

    printf("numerele in ordine descrescatoare sunt: %.6f, %.6f, %.6f\n ", a, b, c);
}
int main(){

    float x, y, z;

    printf("x = ");
    scanf("%f", &x);

    printf("y = ");
    scanf("%f", &y);

    printf("z = ");
    scanf("%f", &z);

    numere(x,y,z);




    return 0;
}
#include<stdio.h>
int maxim(int a, int b, int c){
    if(a >= b && a >= c){
        return a;
    }
    else{
        if(b >= a && b >= c)
        {
            return b;
        }
        else{
            return c;
        }
    }
}


int main(){
    int x, y, z;

    printf("Introduceti trei numere intregi: ");
    scanf("%d %d %d", &x, &y, &z);

    int max = maxim(x, y, z);
    printf("Maximul este: %d\n", max);

    return 0;
}
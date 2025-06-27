#include<stdio.h>
int main(){
    int x,y,z;
    printf("x = ");
    scanf("%d", &x);
    printf("\n");
    printf("y = ");
    scanf("%d", &y);
    printf("\n");
    printf("z = ");
    scanf("%d", &z);
    printf("\n");


    if(x <= z && z < y){
        printf("z este in intervalul [x,y)\n");
    }
    else
    {
        printf("z nu este in intervalul [x,y)\n");
    }

}

#include<stdio.h>

int main(){
    int an;
    printf("an = ");
    scanf("%d", &an);
    printf("\n");

    if(an % 4 == 0){
        if(an % 100 == 0 && an % 400 != 0)
        {
            printf(" %d nu e an bisesct.\n", an);
        }
        else {
            printf("%d este an bisect.\n", an);
        }
    }
    else{
        printf("%d nu e an bisect.\n", an);
    }

    return 0;
}
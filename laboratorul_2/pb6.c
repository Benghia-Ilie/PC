#include<stdio.h>

int main(){
    int opt;
    float x, y;

    while(1){
        printf("1-Adunare\n");
        printf("2-Scadere\n");
        printf("3-Inmultire\n");
        printf("4-Impartire\n");
        printf("5-Iesire\n");

        printf("Introduceti o optiune: ");
        scanf("%d", &opt);

        if(opt == 5){
            printf("Iesire...\n");
            break;
        }

        if(opt >= 1 && opt <= 4){
            printf("x = ");
            scanf("%f", &x);
            printf("y = ");
            scanf("%f", &y);
        }

        switch(opt){
            case 1:
                printf("Adunare: %f + %f = %f\n", x, y, x + y);
                break;
            case 2:
                printf("Scadere: %f - %f = %f\n", x, y, x - y);
                break;
            case 3:
                printf("Inmultire: %f * %f = %f\n", x, y, x * y);
                break;
            case 4:
                if(y != 0){
                    printf("Impartire: %f / %f = %f\n", x, y, x / y);
                } else {
                    printf("Eroare: impartire la zero!\n");
                }
                break;
            default:
                printf("Optiune invalida!\n");
        }

        printf("\n");
    }

    return 0;
}

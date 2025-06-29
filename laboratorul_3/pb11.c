#include<stdio.h>
void l(int n){
    for(int i = 0; i < n; i++){
        if(i == 0){
            for(int j = 0; j < n; j++){
                printf("*\n");
            }
        }
        else{
            if(i == n-1){
                for(int j = 0; j< n; j++){
                    printf("*");
                }
            }
        }
    }
    printf("\n");
}

void c(int n){
    for(int i = 0; i < n; i++){
        if(i == 0 || i == n - 1 ){
            for(int j = 0; j < n; j++){
                printf("*");
            }
        }
        else{
            for(int j = 0; j< n; j++){
                if(j == 0){
                    printf("*");
                }
            }
        }
        printf("\n");
    }

}
void o(int n){
    for(int i = 0; i < n; i++){
        if(i == 0 || i == n - 1 ){
            for(int j = 0; j < n; j++){
                printf("*");
            }
        }
        else{
            for(int j = 0; j< n; j++){
                if(j == 0 || j == n-2){
                    printf("*");
                }
                printf(" ");
            }
        }
        printf("\n");
    }

}

void n(int n){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++)
        {
            if(j == 0 || j == n-1 || i == j){
                printf("*");
            }else{
                printf(" ");
            }
        }
        printf("\n");
    }
}

void z(int n){
    for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                if(i == 0 || i == n-1 || i == n-j-1){
                    printf("*");
                }
                else{
                    printf(" ");
                }
                
            }
        printf("\n");
    }

}

void t(int n){
    for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                if(i == 0){
                    printf("*");
                }
                else{
                    if(j == n/2){
                        printf("*");
                    }
                    else{
                        printf(" ");
                    }
                }
                
            }
        printf("\n");
    }
}

void p(int n){
    for(int i = 0; i < n; i++){
        if(i == 0 || i == n/2 ){
            for(int j = 0; j < n; j++){
                printf("*");
            }
        }
        else{
            for(int j = 0; j< n; j++){
                if(j == 0 || (j == n-2 && i < (n + 1)/2)){
                    printf("*");
                }
                printf(" ");
            }
        }
        printf("\n");
    }
}

void k(int n){
    for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                if(j == 0 || i == (n+1)/2-j || i == (n-2)/2+j){
                    printf("*");
                }
                else{
                    printf(" ");
                }
                
            }
        printf("\n");
    }

}
void r(int n){
    for(int i = 0; i < n; i++){
        if(i == 0 || i == n/2 ){
            for(int j = 0; j < n; j++){
                printf("*");
            }
        }
        else{
            for(int j = 0; j< n; j++){
                if(j == 0 || (j == n-2 && i < (n + 1)/2) || i == (n-2)/2+j){
                    printf("*");
                }
                printf(" ");
            }
        }
        printf("\n");
    }
}

int main(){
    printf("litera L = \n");
    l(7);
    printf("litera C = \n");
    c(7);
    printf("litera O = \n");
    o(7);
    printf("litera N = \n");
    n(7);
    printf("litera Z = \n");
    z(7);
    printf("litera T = \n");
    t(7);
    printf("litera P = \n");
    p(7);
    printf("litera K = \n");
    k(7);
    printf("litera R = \n");
    r(7);
    return 0;
}
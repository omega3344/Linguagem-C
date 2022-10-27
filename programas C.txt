/* Main function of the C program. */

#include <stdio.h>

void quadrado (int n){
    int i,j;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            printf("#");
        }
        printf("\n");
    }
}

void xadrez (int n){
    int i,j;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if((i+j)%2==0)printf("#");
        else printf("_");
        }
        printf("\n");
    }
}

void trianguloH (int n){
    int i,j,k;
    for(i=0;i<n;i++){
        for(k=0;k<(n-i);k++){
            printf(" ");
        }
        for(j=0;j<(2*(i+1))-1;j++){
            printf("#");
        }
        printf("\n");
    }
}

void trianguloV (int n){
    int i,j,k;
    for(i=0;i<n;i++){
        for(j=(n-i);j<=n;j++){
            printf("#");
        }
        printf("\n");
    }
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            printf("#");
        }
        printf("\n");
    }
}

int circulo (int raio){
    printf ("Circulo %d ainda não está feito...\n", raio);
    return 0;
}

int main()
{
    quadrado (5);
    xadrez (5);
    trianguloH (5);
    trianguloV (5);
    printf ("\nForam usados %d caracteres para fazer o circulo\n", circulo (5));
    return 0;
}
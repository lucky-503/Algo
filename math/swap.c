#include <stdio.h>

/*  Fonction qui échange la valeur de deux nombre
    paramètre: 
    - a : l'adresse du premier nombre
    - b : l'adresse du deuxième nombre  */
void swap(int *a, int *b);

int main(){
    int a = 2;  // premier nombre
    int b = 7;  // deuxième nombre

    printf("Avant\n");
    printf("a = %d et b = %d\n\n", a, b); // a = 2 et b = 7

    swap(&a, &b);

    printf("Après\n");
    printf("a = %d et b = %d\n", a, b); // a = 7 et b = 2

    return 0;
}

void swap(int *a, int *b){
    int tmp = *a;
    *a = *b;
    *b = tmp;
}
#include<stdlib.h>
#include<stdio.h>

int* speicher_alloz(int num);

int main(void){

    // Speicher für Variablen alloziern
    int* p = (int*) malloc(sizeof(int));
    *p = 4;
    free(p); // Speicher wieder freigeben
    double * d = (double *) malloc(sizeof(double));
    *d = 2.0;
    free(d);

    // Speicher für einen Array allozieren
    char* array;
    array = (char*) malloc(sizeof(char)*10);
    array[0] = 'c';
    array[1] = 'b';
    array[2] = 'a';

    int* user_array;
    int num;
    printf("Wie viele Elemente soll dein Array haben?");
    scanf("%d", &num);
    user_array = speicher_alloz(num);
    printf("Gib bitte deine Zahlen ein.");
    for(int i = 0; i < num; i++){
        scanf("%d", &user_array[i]);
    }

    free(array);
    free(user_array);

    return 0;
}

int* speicher_alloz(int num){
    int* p = (int*) malloc(num * sizeof(int));
    return p;
}


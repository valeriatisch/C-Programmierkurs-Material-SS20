#include <stdio.h>

void swap(int*, int*);

int main(void){

    int a = 4;
    int* adresse_von_a = &a;

    printf("Adresse von a: %p und a selbst: %d\n", adresse_von_a, *adresse_von_a);

    int b = 4;
    int c = 5;
    swap(&b, &c);
    printf("b=%d und c=%d \n", b, c);

    int array[] = {4, 5, 8, 10};
    printf("Adreese vom Array bzw. dem 0. Element darin: %p.\n", array);
    printf("Das 0. Element ist %d.\n", *array);
    printf("Das Adresse vom 1. Element ist %p (4 Bytes weiter) und das Element selbst is %d.\n", array+1, *(array+1));
    printf("Das 2. Element ist %d.\n", array[2]);
    printf("Das 3. Element plus 11 ist %d.\n", array[3] + 11);

    return 0;
}

void swap(int* a, int* b){
    int tmp = *a;
    *a = *b;
    *b = tmp;
}
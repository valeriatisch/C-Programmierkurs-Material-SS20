#include <stdio.h>

int main(void){

    int array[10];

    array[0] = 3;
    array[1] = 5;
    array[2] = 'a'; //Wird zu einer Zahl umgewandelt und zwar zur 97 nach der ASCII Tabelle.

    printf("%d\n", array[2]);

    for(int i = 0; i < 10; i++){
        array[i] = i; //Die alten Werte werden dabei überschrieben.
    }

    for(int j = 0; j < 10; j++){
        printf("%d\n", array[j]);
    }

    return 0;
}
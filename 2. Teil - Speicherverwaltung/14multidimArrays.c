#include <stdio.h>

int main(void){

    // Array, indem wir 3 Strings mit jeweils 5 Charactern speichern können
    char array[3][5];
    printf("Bitte gib drei Wörter mit jeweils maximal 5 Buchstaben ein.\n");
    for(int i = 0; i < 3; i++){
        scanf("%s", array[i]);
    }

    //Hier wird der 1. Character des String mit Index 1 modifiziert.
    array[2][1] = 'b';

    int matrix[4][4];

    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            scanf("%d", &matrix[i][j]);
        }
    }

}



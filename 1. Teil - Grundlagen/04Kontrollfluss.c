#include <stdio.h>

int main(void){

    int x = 4;
    int y = 7;

    if(x > y){
        printf("x ist groesser als y. \n");
    } else if (x < 0 && x > y){
        if(x == -1){
            printf("x ist groesser als y, aber x = -1. \n");
        }
        printf("x ist kleiner als -1, aber groesser als y. \n");
    } else {
        printf("x ist nicht groesser als y. \n");
    }

    switch (x) {
        case 1: printf("x ist gleich 1. \n"); break;
        case 2: printf("x ist gleich 2. \n"); break;
        case 3: printf("x ist gleich 3. \n"); break;
        case 4: printf("x ist gleich 4. \n"); break;
        default: printf("x ist sonst was. \n"); break;
    }



    return 0;
}
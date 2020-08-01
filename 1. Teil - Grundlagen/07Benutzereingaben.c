#include <stdio.h>

int main(void){

    int y;

    printf("Gib bitte eine ganze Zahl ein:\n");
    scanf("%d", &y);
    printf("Dein Input war: %d", y);

    char x;

    printf("Gib bitte ein Zeichen ein:\n");
    scanf("%c", &x);
    printf("Dein Input war: %c", x);

    return 0;
}
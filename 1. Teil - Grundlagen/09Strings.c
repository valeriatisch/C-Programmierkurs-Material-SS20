#include <stdio.h>

int main(void){

    char wort1[50];
    char wort2[50];

    printf("Bitte gib zwei Woerter ein. \n");

    scanf("%s", wort1);
    scanf("%s", wort2);

    printf("Das erste eingelesene Wort war %s.\n", wort1);
    printf("Das zweite eingelesene Wort war %s.\n", wort2);

    int i1 = 0;
    while(wort1[i1] != '\0')
        i1++;

    printf("Die Laenge von Wort 1 ist %d.\n", i1);

    int i2 = 0;
    while(wort2[i2] != '\0')
        i2++;

    printf("Die Laenge von Woort 2 ist %d.\n", i2);

    int j = 0;
    while(wort1[j] == wort2[j] && wort1[j] != '\0' && wort2[j] != '\0')
        j++;

    if (wort1[j] < wort2[j])
        printf("%s kommt im Alphabet vor %s.\n", wort1, wort2);
    else if (wort1[j] > wort2[j])
        printf("%s kommt im Alphabet nach %s.\n", wort1, wort2);
    else
        printf("Du hast zwei identische Woerter eingegeben.\n");

    return 0;
}



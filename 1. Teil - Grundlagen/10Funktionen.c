#include <stdio.h>

//Makro-Funktionen:
#define HALBIEREN(zahl) zahl/2
#define SUM(a, b) a+b

#define X 100.5 //Das ist eine Konstante.

/*** Funktionen deklarieren ***/
int sum(int a, int b);
long int faculty(int a);

/*** Main Funktion ***/
int main(void){

    int k;
    printf("Gib bitte eine ganze positive Zahl ein: \n");
    scanf("%d", &k);
    printf("Fakultaet von %d ist %ld.\n", k, faculty(k));

    int y = 20;
    printf("Die Summe von %d und %f ist %d.\n", y, X, sum(y, (int) X));

    int l = 10;
    int c = HALBIEREN(l);
    printf("Die Haelfte von %d ist %d.\n", l, c);

    int a = 40,
        b = 50;
    int e = SUM(a, b);
    printf("Die Summe von %d und %d ist %d.\n", a, b, e);

    return 0;
}

/*** Funktionen implementieren ***/
int sum(int a, int b){
    return a + b;
}

//Rekursive Funtkion:
long int faculty(int a){
    if ( a == 0 )
        return 1;
    else if (a >= 1)
        return a * faculty(a - 1);
}

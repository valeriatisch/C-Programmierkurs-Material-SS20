#include <stdio.h>

int main(void){

    // While-Schleifen

    int x = 0;
    while(x < 10){
        printf("Das hier wird 10x ausgegeben.\n");
        x = x + 1; // ist das gleiche wie "x++;"
    }

    while(0){
        //Die folgende Zeile wird niemals erreicht, weil die Bedingung (0) immer falsch bleibt.
        printf("Das soll mehrmals ausgegeben werden.\n");
    }

    do{
        //Der do-Block wird zuerst durchlaufen und dann wird erst die Bedingung überprüft.
        printf("Das soll mehrmals ausgegeben werden.\n");
    } while(0);

    //For-Schleifen

    for(int i = 0; i < 10; i++){
        printf("i: %d\n", i);
        if(i == 6){
            continue;
        }
        printf("blabla\n");
    }

    //For-Schleifen können verschachtelt werden.
    for(int j = 5; j < 10; j++){
        for(int k = 10; k > 0; k--){
            //Was hier steht, wird 50x ausgeführt.
        }
    }

    return 0;
}


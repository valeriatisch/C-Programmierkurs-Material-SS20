#include <stdio.h>
#include <unistd.h>
#include <pthread.h>

void* first_task(void* args){
    int* i = (int*) args;
    for(int j = 0; j < *i; j++){
        printf("first task i = %d\n", j);
        sleep(1);
    }

    return NULL;
}

void second_task(){
    for(int i = 0; i < 10; i++){
        printf("second task i = %d\n", i);
        sleep(2);
    }
}

int main(void){

    int n = 25;
    pthread_t t1;
    pthread_create(&t1, NULL, first_task, &n);
    //first_task();
    second_task();

    return 0;
}


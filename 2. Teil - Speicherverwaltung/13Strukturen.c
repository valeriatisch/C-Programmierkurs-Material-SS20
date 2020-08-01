#include <stdio.h>
#include <string.h>

struct student {
    char name[50];
    int geburtsjahr;
    double durchschnittsnote;
};

void print_struct_0(struct student s);
void print_struct_1(struct student*);

int main(void){

    struct student s1;

    printf("Die Gesamtgroesse ist: %zu.\n", sizeof(struct student));
    printf("sizeof(name) = %zu \n", sizeof(s1.name));
    printf("sizeof(jahr) = %zu \n", sizeof(s1.geburtsjahr));
    printf("sizeof(note) = %zu \n", sizeof(s1.durchschnittsnote));

    struct student s2 = {"Peter K.", 1993, 2.0};
    print_struct_0(s2);

    printf("Wie heisst du?\n");
    scanf("%s", s1.name);
    printf("Wann wurdest du geboren?\n");
    scanf("%d", &s1.geburtsjahr);
    printf("Was ist deine Note?\n");
    scanf("%lf", &s1.durchschnittsnote);

    print_struct_1(&s1);

    struct student array[10];

    strcpy(array[0].name, "Marie M.");
    printf("Name des ersten Studis im Array: %s\n", array[0].name);
    int jahr = 1990;
    memcpy(&(array[0].geburtsjahr), &jahr, sizeof(array[0].geburtsjahr));
    printf("%d geboren.\n", array[0].geburtsjahr);

    return 0;
}

void print_struct_0(struct student s){
    printf("%s ist %d geboren und hat eine Durschnittsnote von %lf.\n", s.name, s.geburtsjahr, s.durchschnittsnote);
}

void print_struct_1(struct student *s){
    printf("%s ist %d geboren und hat eine Durschnittsnote von %lf.\n", (*s).name, s->geburtsjahr, s->durchschnittsnote);
}
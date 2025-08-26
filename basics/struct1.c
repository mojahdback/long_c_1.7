#include <stdio.h>
#include <string.h>
typedef struct {
    char name[20];
    char model[20];
    int year;
    float prix;

}car;
void data(car *cars){
    printf("\ncar 1 :\n ");
    printf("\tName: ");
    scanf(" %[^\n]s",cars->name);

    printf("\tModel : ");
    scanf(" %[^\n]s",cars->model);

    printf("\tYear Model: ");
    scanf("%d",&cars->year);

    
    printf("\tPrix: ");
    scanf("%f",&cars->prix);



}
void display(car cars){

    printf("\nName of car --> %s\nModel --> %s\nDate Make it --> %d\nPrix --> %.2f\n"
        ,cars.name,cars.model,cars.year,cars.prix);

}

int main(){

    car c1;
    c1.year = 2022;
    c1.prix = 390.34;
    strcpy(c1.name,"katkat");
    strcpy(c1.model,"first1");

    data(&c1);
    display(c1);












    return 0;
}
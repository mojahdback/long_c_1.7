#include <stdio.h>
#include <string.h>
typedef struct {
    char title[20];
    char author[20];
    int pages;
    float prix;
}book;

void data(book  *b,int *count){
    for(int i=0;i<3;i++){

        printf("\nBOOK %d :\n ",i+1);
        printf("\tTitle: ");
        scanf(" %[^\n]s",b[i].title);

        printf("\tAuthor: ");
        scanf(" %[^\n]s",b[i].author);

        printf("\tPages: ");
        scanf("%d",&b[i].pages);

        printf("\tPrix: ");
        scanf("%f",&b[i].prix);

        (*count)++;

    }

}
void display(book b[],int count){

    for(int i=0;i<count;i++){

        printf("\nName of Book --> %s\nName of author --> %s\nnumber of pages --> %d\nPrix --> %.2f\n"

        ,b[i].title,b[i].author,b[i].pages,b[i].prix);


        
    }

}



int main(){

    book b[3];
    int count=0;


    data(b,&count);
    display(b,count);


    return 0;
}
#include <stdio.h>
typedef struct {
    int id;
    char title[20];
    char author[20];
    int year;
    float price;
    
}book;

void add(book books[],int size,int *count){
    for(int i=0;i<size;i++){
        printf("BOOK %d:\n",i+1);
        printf("\tID : ");
        scanf("%d",&books[*count].id);
        
        printf("\tTITLE : ");
        scanf(" %[^\n]",books[*count].title);
        
        printf("\tAUTHOR : ");
        scanf(" %[^\n]",books[*count].author);
    
        printf("\tYEAR : ");
        
        scanf("%d",&books[*count].year);
        
        printf("\tPRICE : ");
        scanf("%f",&books[*count].price);
        
        (*count)++;
    }
    
}

void display(book books[],int count){
    for(int i=0;i<count;i++){
        printf("\n************* Book %d ************\n",i+1);
        printf("\t ID ==> %d\n",books[i].id);
        printf("\t TITLE ==> %s\n",books[i].title);
        printf("\t AUTHOR ==> %s\n",books[i].author);
        printf("\t YEAR ==> %d\n",books[i].year);
        printf("\t PRICE ==> %.2f DH\n",books[i].price);
        printf("===========================================\n");
    }
}


void search(book books[],int count){
    int code;
    int found = 0;
    book *temp;
    printf("Enter ID of book: ");
    scanf("%d",&code);
    for(int i=0;i<count;i++){
        if(code == books[i].id){
            found =1;
            temp = &books[i];
        printf("\n************* IT is HERE **************\n");
        printf("\t ID ==> %d\n",temp->id);
        printf("\t TITLE ==> %s\n",temp->title);
        printf("\t AUTHOR ==> %s\n",temp->author);
        printf("\t YEAR ==> %d\n",temp->year);
        printf("\t PRICE ==> %.2f DH\n",temp->price);
        printf("================ Found =================\n");
        break;
            
        }
        
    }
    if(!found)
       printf("\n I dont found this code %d\n",code);
    
}
void modify(book books[],int count){
    int code;
    int found = 0;
    book *temp;
    printf("Enter ID of book: ");
    scanf("%d",&code);
    for(int i=0;i<count;i++){
        if(code == books[i].id){
            found =1;
            temp = &books[i];
        printf("\n************* IT is HERE **************\n");
        printf("\t ID ==> %d\n",temp->id);
        printf("\t TITLE ==> %s\n",temp->title);
        printf("\t AUTHOR ==> %s\n",temp->author);
        printf("\t YEAR ==> %d\n",temp->year);
        printf("\t PRICE ==> %.2f DH\n",temp->price);
        printf("================ Found =================\n");
        printf("Enter New Information: \n");
        printf("\tID : ");
        scanf("%d",&books[i].id);
        
        printf("\tTITLE : ");
        scanf(" %[^\n]",books[i].title);
        
        printf("\tAUTHOR : ");
        scanf(" %[^\n]",books[i].author);
    
        printf("\tYEAR : ");
        
        scanf("%d",&books[i].year);
        
        printf("\tPRICE : ");
        scanf("%f",&books[i].price);
        break;
            
        }
        
    }
    if(!found)
       printf("\n I dont found this code %d\n",code);
    
    
}

void delete(book books[],int *count){
    int code;
    int found = 0;
    book temp;
    printf("Enter ID of book: ");
    scanf("%d",&code);
    for(int i=0;i<*count;i++){
        if(code == books[i].id){
            found =1;
        printf("\n************* IT is HERE **************\n");
        printf("\t ID ==> %d\n",books[i].id);
        printf("\t TITLE ==> %s\n",books[i].title);
        printf("\t AUTHOR ==> %s\n",books[i].author);
        printf("\t YEAR ==> %d\n",books[i].year);
        printf("\t PRICE ==> %.2f DH\n",books[i].price);
        printf("================ Delete  =================\n");
        for(int i=0;i<*count-1;i++){
            books[i] = books[i+1];
        }
        (*count)--;
        break;
        }
        
    }
    
    if(!found)
        printf("\n I dont found this code %d\n",code);
    
    
}


void sort(book books[],int count){
    
    int i,j;
    book temp;
    
    printf("\t Sorting By Years\n");
    
    for(i=0;i<count -1;i++){
        for(j=0;j<count -1 -i;j++){
            if(books[j].year > books[j+1].year){
                temp = books[j];
                books[j] = books[j+1];
                books[j+1] = temp;
            }
        }
    }
}


int main(){
    
    book books[100];
    int count = 0;
    int size;
    int choix;
    
    do{
        printf("\t========== BOOK MANAGEMENT MENU =======\n");
         printf("\t\t 1 : Add Book\n");
          printf("\t\t 2 : Display Book\n");
           printf("\t\t 3 : Search Book\n");
            printf("\t\t 4 : Modify Book\n");
             printf("\t\t 5 : Delete Book\n");
              printf("\t\t 6 : Sorting Book\n");
               printf("\t\t 0 : Exit\n");
        printf("\t===============   END  ===============\n");      
        printf("Your Choice: ");
        scanf("%d",&choix);
        
        switch(choix){
            
            case 1 : printf("How much books do you want to add: ");
                     scanf("%d",&size);
                     printf("\n================== START ==================\n");
                     add(books,size,&count);
                     printf("\n=================== DONE ==================\n");
                     break;
            
            case 2 : printf("\n================== START ==================\n");
                     display(books,count);
                     printf("\n=================== DONE ==================\n");
                     break;
            
            case 3 : printf("\n================== START ==================\n");
                     search(books,count);
                     printf("\n=================== DONE ==================\n");
                     break;
            
            case 4 : printf("\n================== START ==================\n");
                     modify(books,count);
                     printf("\n=================== DONE ==================\n");
                     break;
               
            case 5 : printf("\n================== START ==================\n");
                     delete(books,&count);
                     printf("\n=================== DONE ==================\n");
                     break;
               
                
            case 6 : printf("\n================== START ==================\n");
                     sort(books,count);
                     printf("\n=================== DONE ==================\n");
                     break;
               
                 
            case 0 : printf("\nThanks for useing our program!!!\n");
                     break;
                     
            default : printf("\nPlease Enter number between 1 to 6 or 0 to exit\n");
                      break;
        }
        
        
        
        
        

    }while(choix != 0);
    
    
    
    
    
    
    return 0;
}
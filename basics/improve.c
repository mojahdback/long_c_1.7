#include <stdio.h>
typedef struct{
    int code;
    char name[30];
    int age;
    float grade;
    char type[30];
    
    
}student;


void add(student stdns[],int size,int *count){
   
   
    for(int i=0;i<size;i++){
        printf("\nSTUDENT %d:\n",i+1);
        printf("\t\tCODE : ");
        scanf("%d",&stdns[*count].code);
        getchar();
        printf("\t\tNAME : ");
        fgets(stdns[*count].name,30,stdin);
    
        printf("\t\tAGE : ");
        scanf("%d",&stdns[*count].age);
    
        printf("\t\tGRADE : ");
        scanf("%f",&stdns[*count].grade);
        getchar();
        printf("\t\tTYPE : ");
        fgets(stdns[*count].type,30,stdin);
        
        (*count)++;
    }
    
}

void display(student stdns[], int count) {
    for (int i = 0; i < count; i++) {
        printf("\n========= STUDENT %d =========\n", i + 1);
        printf(" Code  : %d\n", stdns[i].code);
        printf(" Name  : %s", stdns[i].name);  
        printf(" Age   : %d\n", stdns[i].age);
        printf(" Grade : %.2f\n", stdns[i].grade);
        printf(" Type  : %s", stdns[i].type);  
        printf("==============================\n");
    }
}

void search(student stdns[],int count){
        
        int id;
        int found =0;
        student *temp;
        printf("Enter search code : ");
        scanf("%d",&id);
        
        for(int i=0;i<count;i++){
            if(id == stdns[i].code){
               found = 1;
               temp = &stdns[i];
               printf("\nStudent here :\n");
               printf("\tCode -> %d \n",temp->code);
               printf("\tName -> %s",temp->name);
               printf("\tAge -> %d \n",temp->age);
               printf("\tGrade %.2f\n",temp->grade);
               printf("\tType -> %s",temp->type);
               break;
        
               
            }
               
        }
        
        if(!found)
           printf("\tStudent Not found\n");
        
    
}

void modify(student stdns[],int count){
    int id;
    int found =0 ;
    student *temp;
    printf("Enter search code : ");
    scanf("%d",&id);
    
     for(int i=0;i<count;i++){
            if(id == stdns[i].code){
               found = 1;
               temp = &stdns[i];
               printf("\nStudent here :\n");
               printf("\tCode -> %d \n",temp->code);
               printf("\tName -> %s",temp->name);
               printf("\tAge -> %d \n",temp->age);
               printf("\tGrade %.2f\n",temp->grade);
               printf("\tType -> %s",temp->type);
               
               printf("\nEnter new information:\n");
                    printf("\t\tCODE : ");
                    scanf("%d",&temp->code);
                    
                    getchar();
                    
                    printf("\t\tNAME : ");
                    fgets(temp->name,30,stdin);
    
                    printf("\t\tAGE : ");
                    scanf("%d",&temp->age);
    
                    printf("\t\tGRADE : ");
                    scanf("%f",&temp->grade);
                     
                    getchar();
                     
                    printf("\t\tTYPE : ");
                    fgets(temp->type,30,stdin);
                    break;
            }
               
        }
        
        if(!found)
           printf("\tStudent Not found\n");
}

void delete(student stdns[],int *count){
    int id;
    int found =0;
    printf("Enter code of student:");
    scanf("%d",&id);
    
    for(int i=0;i<*count;i++){
        if(id == stdns[i].code){
            found = 1;
            for(int j = i ;j < *count - 1;j++) {
                stdns[j]=stdns[j + 1];
            }
            (*count)--;
            break;
        }
    }

    if(!found)
       printf("\tThis student not here\n");
}

void sorting(student stdns[] , int count){
    
    
    int i,j;
    student temp;
    printf("\nSorting by grade:\n");
    for(i=0;i<count -1;i++){
        for(j=i;j<count-1-i;j++){
            if(stdns[j].grade < stdns[j +1].grade){
                temp = stdns[j];
                stdns[j] = stdns[j+1];
                stdns[j+1] = temp;
            }
        }
    }
}


int main()
{
    student stdns[100];
    int count =0;
     int size;
    
    printf("\nHow much students do you want to enter : ");
    scanf("%d",&size);
    
    add(stdns,size,&count);
    //display(stdns,count);
    //search(stdns,count);
   // modify(stdns,count);
   //delete(stdns,&count);
    sorting(stdns,count);
    display(stdns,count);

    return 0;
}
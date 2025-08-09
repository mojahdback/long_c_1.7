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

void insert(student stdns[],int *count){
    int pos;
    printf("\tPOSition :");
    scanf("%d",&pos);
    
    if(pos < 0 || pos > *count)
       printf("\nThis position not efacive!\n");
       
    else
    {
        for(int i = *count;i>pos;i--){
            stdns[i] = stdns[i - 1];
        }
    
        
        printf("\n ADD A NEW STUDENT :\n");
        printf("\t\tCODE : ");
        scanf("%d",&stdns[pos].code);
        getchar();
        printf("\t\tNAME : ");
        fgets(stdns[pos].name,30,stdin);
    
        printf("\t\tAGE : ");
        scanf("%d",&stdns[pos].age);
    
        printf("\t\tGRADE : ");
        scanf("%f",&stdns[pos].grade);
        getchar();
        printf("\t\tTYPE : ");
        fgets(stdns[pos].type,30,stdin);
            (*count)++;
    }
}


int main()
{
    student stdns[100];
    int count =0;
    int size;
    int choix;
    do{
        printf("\n\t========= Student Management Menu =========\n");
        printf("\t\t1 : Add students\n");
        printf("\t\t2 : Display students\n");
        printf("\t\t3 : search student\n");
        printf("\t\t4 : Modify student\n");
        printf("\t\t5 : Insert student\n");
        printf("\t\t6 : Delete student\n");
        printf("\t\t7 : sort student\n");
        printf("\t\t0 : Exit\n");
        
        printf("\nEnter your choice: ");
        scanf("%d",&choix);
        
        switch(choix){
            
            case 0 : printf("\tThanks for useing  our program!\n");
                     break;
                     
            case 1 : printf("\nHow much students do you want to enter : ");
                     scanf("%d",&size);
                     printf("\n****************** START *****************\n");
                     add(stdns,size,&count);
                     printf("\n==================  DONE =================\n");
                     break;
                     
            case 2 : printf("\n****************** START *****************\n");
                     display(stdns,count);
                     printf("\n==================  DONE =================\n");
                     break;
            
            case 3 : printf("\n****************** START *****************\n");
                     search(stdns,count);
                     printf("\n==================  DONE =================\n");
                     break;
            
            case 4 : printf("\n****************** START *****************\n");
                     modify(stdns,count);
                     printf("\n==================  DONE =================\n");
                     break;
            
            case 5 : printf("\n****************** START *****************\n");
                     insert(stdns,&count);
                     printf("\n==================  DONE =================\n");
                     break;
            
            case 6 : printf("\n****************** START *****************\n");
                     delete(stdns,&count);
                     printf("\n==================  DONE =================\n");
                     break;
            
            case 7 : printf("\n****************** START *****************\n");
                     sorting(stdns,count);
                     printf("\n==================  DONE =================\n");
                     break;
            
            default : printf("\nPlease Enter number beteween 1 to 7 !!!\n");
                      break;
            
        }
        
        
        
        
    }while(choix != 0 );
  

    return 0;
}
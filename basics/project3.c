#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char name[50];
    int age;
    char country[50];
    float grade;
    
}student;
        student stdns[100];
        int count = 0;
void data(student *p){
  
    int sum;
    printf("\nHow Maney students do want to add : ");
    scanf("%d",&sum);
    int i;
    for(i=0;i<sum;i++){
        printf("Enter this Informations :\n");
        printf("\t\tName : ");
        getchar();
        fgets(p->name,50,stdin);
        printf("\t\tAge : ");
        scanf("%d",&p->age);
        printf("\t\tCountry : ");
        getchar();
        fgets(p->country,50,stdin);
        printf("\t\tGrade : ");
        scanf("%f",&p->grade);
        count++;
    }
}
void print(void){
    int i;
    for(i=0;i<count;i++){
        printf("\nPerson %d:\n",i+1);
        printf("\n\tYour name -> %s\tYour age -> %d\n\tYour country -> %s\tGet -> %.2f\n",
        stdns[i].name,stdns[i].age,stdns[i].country,stdns[i].grade);
    }
    
}
student search(){
   char a[50];
    int found = 0;
    printf("enter searching name");
    getchar();
    fgets(a,50,stdin);
    int i;
    for(i=0;i<count;i++){
        if(strcmp(stdns[i].name,a)==0)
           found = 1;
           
    }
    if(found == 1)
      printf("\n\t==> There is here ! <==\n");
    else
      printf("\n\t==> Not here ! <==\n");
}

int main(){
      int choix;
    do{
      
        printf("\nPlease enter number between 1 --> 6 or 0 to skip!\n");
        printf("\t1 --- > add a student.\n");
        printf("\t2 --- > affiche a student.\n");
        printf("\t3 --- > searching for a student.\n");
        printf("\t4 --- > Modify a value.\n");
        printf("\t5 --- > Delete a student.\n");
        printf("\t6 --- > Sorting as  grade.\n");
        printf("\t7 --- > Enter zero to skip.\n");
        printf("\nMon choix : ");
        scanf("%d",&choix);
        
        switch(choix){
            
            case 1 : printf("\n================= Start ====================\n");
                     data(stdns);
                     printf("\n================= Done! ====================\n");
                     break;
            case 2 : printf("\n================= Start ====================\n"); 
                     print();
                     printf("\n================= Done! ====================\n");
                     break;
            case 3 : printf("\n================= Start ====================\n"); 
                     search();
                     printf("\n================= Done! ====================\n");
                     break;
        }
        
        
    }while(choix != 0);
    
    
    
    
    
    return 0;
}
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
void data(student *p,int size){
  
   
    printf("\nHow Maney students do want to add : ");
    scanf("%d",&size);
    int i;
    for(i=0;i<size;i++){
        printf("Enter this Informations :\n");
        printf("\t\tName : ");
        getchar();
        fgets(p[i].name,50,stdin);
        printf("\t\tAge : ");
        scanf("%d",&p[i].age);
        printf("\t\tCountry : ");
        getchar();
        fgets(p[i].country,50,stdin);
        printf("\t\tGrade : ");
        scanf("%f",&p[i].grade);
        count++;
    }
}
void print(student S[],int size){
    int i;
    for(i=0;i<size;i++){
        printf("\nPerson %d:\n",i+1);
        printf("\n\tYour name -> %s\tYour age -> %d\n\tYour country -> %s\tGet -> %.2f\n",
        S[i].name,S[i].age,S[i].country,S[i].grade);
    }
    
}
void search(student *S,int size){
   char a[50];
    int found = 0;
    printf("enter searching name");
    getchar();
    fgets(a,50,stdin);
    int i;
    for(i=0;i<size;i++){
        if(strcmp(S[i].name,a)==0)
           found = 1;
           
    }
    if(found == 1)
      printf("\n\t==> There is here ! <==\n");
    else
      printf("\n\t==> Not here ! <==\n");
}
void sorting(student *S,int size){
    student temp;
    int i,j;
    for(i=0;i<size-1;i++){
        for(j=0;j<size-1-i;j++){
            if(S[j].grade < S[j+1].grade){
                temp = S[j];
                S[j]=S[j+1];
                S[j+1]= temp;
            }
        }
        
    }
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
            
            case 0 : printf("\n\tThanks for useing my system!\n");
                     break;
            case 1 : printf("\n================= Start ====================\n");
                     data(stdns,count);
                     printf("\n================= Done! ====================\n");
                     break;
            case 2 : printf("\n================= Start ====================\n"); 
                     print(stdns,count);
                     printf("\n================= Done! ====================\n");
                     break;
            case 3 : printf("\n================= Start ====================\n"); 
                     search(stdns,count);
                     printf("\n================= Done! ====================\n");
                     break;
                     
            case 4 : printf("\n================= Start ====================\n"); 
                     //function of modiffy
                     printf("\n================= Done! ====================\n");
                     break;
            
            case 5 : printf("\n================= Start ====================\n"); 
                     //function of delete
                     printf("\n================= Done! ====================\n");
                     break;
            
            case 6 : printf("\n================= Start ====================\n");
                     sorting(stdns,count);
                     print(stdns,count);
                     printf("\n================= Done! ====================\n");
                     break;
            default : printf("\nPlease Entre Number Between 1 -> 6 OR 0 TO Skip!\n ");
                        break;
        }   
        
        
    }while(choix != 0);
    
    
    
    
    
    return 0;
}
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
void data(){
    int size;
   
    printf("\nHow Maney students do want to add : ");
    scanf("%d",&size);
    int i;
    for(i=0;i<size;i++){
        printf("Enter this Informations :\n");
        printf("\t\tName : ");
        getchar();
        fgets(stdns[i].name,50,stdin);
        printf("\t\tAge : ");
        scanf("%d",&stdns[i].age);
        printf("\t\tCountry : ");
        getchar();
        fgets(stdns[i].country,50,stdin);
        printf("\t\tGrade : ");
        scanf("%f",&stdns[i].grade);
        count++;
    }
}
void print(){
    int i;
    for(i=0;i<count;i++){
        printf("\nPerson %d:\n",i+1);
        printf("\n\tYour name -> %s\tYour age -> %d\n\tYour country -> %s\tGet -> %.2f\n",
        stdns[i].name,stdns[i].age,stdns[i].country,stdns[i].grade);
    }
    
}
void search(){
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
void sorting(){
    student temp;
    int i,j;
    for(i=0;i<count-1;i++){
        for(j=0;j<count-1-i;j++){
            if(stdns[j].grade < stdns[j+1].grade){
                temp = stdns[j];
                stdns[j]=stdns[j+1];
                stdns[j+1]= temp;
            }
        }
        
    }
}
void modify(){
    int n;
    int i;
    printf("\nCode of student : ");
    scanf("%d",&n);
    int found = 0;
    for(i=0;i<count;i++){
        if(n == stdns[i].age ){
            found =1;
            printf("\n\tName: ");
            scanf(" %[^\n]",stdns[i].name);
            
            printf("\n\tAge: ");
            getchar();
            scanf("%d",&stdns[i].age);
            
             printf("\n\tCountry: ");
            scanf(" %[^\n]",stdns[i].country);
    
            printf("\n\tgrade: ");
            getchar();
            scanf("%f",&stdns[i].grade);
             break;
          
        }      
    }
    
    if(!found)
      printf("\nThere is no syudents have this code %d\n",n);


}

    
void delete (){
    char del_name[30];
    int found =0;
    printf("\nEnter Student name: ");
    scanf(" %[^\n]",del_name);
    int i,j;
    for(i=0;i<count;i++){
        if(strcmp(stdns[i].name,del_name)==0){
            found=1;
            for(j=i;j<count - 1 ;j++){
                stdns[j] = stdns[j + 1];
            }
            count--;
            printf("\n\tStudent Delelte \n");
            break;
        }
    }
    if(!found)
       printf("\n\tStudent not found!\n");
    
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
                     modify(stdns,count);
                     printf("\n================= Done! ====================\n");
                     break;
            
            case 5 : printf("\n================= Start ====================\n"); 
                     delete(stdns,count);
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
#include <stdio.h>
#include <string.h>
typedef struct {
    char name[30];
    int age;
    int code;
}student;
student stdns[100];
int count =0;

void data(){
    int size;
    printf("\nHow much students do you want to enter:");
    scanf("%d",&size);
    for(int i=0;i<size;i++){
        printf("\n\tName: ");
        scanf(" %[^\n]",stdns[i].name);
    
        printf("\n\tAge: ");
        scanf("%d",&stdns[i].age);
    
        printf("\n\tCode: ");
        scanf("%d",&stdns[i].code);
          count++;
    }
}

void disply(){
    int i;
    for(i=0;i<count;i++){
        printf("\n Name => %s , Age => %d , Code => %d\n",stdns[i].name,stdns[i].age,stdns[i].code);
    }
    
}
void modify(){
    int n;
    int i;
    printf("\nCode of student : ");
    scanf("%d",&n);
    int found = 1;
    for(i=0;i<count;i++){
        if(n != stdns[i].code ){
            found =-1;
            continue;
        } 
        if(n == stdns[i].code){
            found=1;
            printf("\n\tName: ");
            scanf(" %[^\n]",stdns[i].name);
    
            printf("\n\tAge: ");
            scanf("%d",&stdns[i].age);
    
            printf("\n\tCode: ");
            scanf("%d",&stdns[i].code);
             break;
          
        }      
    }
    
    if(found==1){
        stdns[count++];
    }
    else
      printf("\nThere is no syudents have this code %d\n",n);


}
void insert(){
    
        
            printf("\n\tName: ");
            scanf(" %[^\n]",stdns[count].name);
    
            printf("\n\tAge: ");
            scanf("%d",&stdns[count].age);
    
            printf("\n\tCode: ");
            scanf("%d",&stdns[count].code);
            count++;

}
void delete (){
    char del_name[30];
    int found =1;
    printf("\nEnter Student name: ");
    scanf(" %[^\n]",del_name);
    int i,j;
    for(i=0;i<count;i++){
        if(strcmp(stdns[i].name,del_name)==0){
            for(j=i;j<count -1 ;j++){
                stdns[j+1] = stdns[j];
                
            }
            count--;
            found=1;
            printf("\n\tStudent Delelte \n");
            break;
        }
    }
    if(!found)
       printf("\n\tStudent not found!\n");
    
}

int main()
{
    int choix;
    do{
        printf("\nStudent Management System !\n");
        printf("\t1. Enter Students \n");
        printf("\t2. Display all Students \n");
        printf("\t3. Insert new Student \n");
        printf("\t4. Modify  Student data \n");
        printf("\t5. Delete a Student  \n");
        printf("\t0. Exit\n");
        
        printf("\nYour choice : ");
        scanf("%d",&choix);
        switch(choix){
            
            case 0 : printf("\n\tThanks for useing my system .\n");
                     break;
            
            case 1 : data(stdns,count);
                     break;
            
            case 2 : disply(stdns,count);
                     break;
            
            case 3 : insert(stdns,count);
                     break;
            
            case 4 : modify(stdns,count);
                     break;
            
            case 5 : delete(stdns,count);
                     break;
            default: printf("\nPlease enter number between 1 to 5 OR 0 TO Skip");
                     break;
            
        }
        
        
    }while(choix != 0);
    
    
    
    
    

    return 0;
}
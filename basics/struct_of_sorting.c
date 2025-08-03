#include <stdio.h>

typedef struct {
    char name[20];
    int age;
    float grade;
    
}student;
student stdns[100];
int count = 0;

void data(student  *S){
    
        printf("\n\tName : ");
         getchar();
        fgets(S->name,20,stdin);
         
        printf("\n\tAge : ");
        scanf("%d",&S->age);
        printf("\n\tGrade : ");
        scanf("%f",&S->grade);
        count++;
    
}
void bubblesort(student S[],int size){
    student temp;
    int i,j;
    for(i=0;i<size-1;i++){
        for(j=0;j<size-1-i;j++){
            if(S[j].grade < S[j+1].grade){
                temp = S[j];
                S[j] = S[j+1];
                S[j+1] = temp;
            }
        }
    }
    
}
void print(student *S,int size){
    printf("\nAfter sorting :\n");
    for(int i=0;i<size;i++){
        printf("\n\tStudent %d => %s Grade --> %.2f",i+1,S[i].name,S[i].grade);
    }
}

int main()
{
    int size;
    
    printf("enter your size: ");
    scanf("%d",&size);
    
    for(int i=0;i<size;i++){
         printf("\nStudent %d !\n",i+1);
         data(&stdns[count]);  
    }

    bubblesort(stdns,count);
    print(stdns,count);
    
    
    
    
    
    
    
    
    
    

    return 0;
}
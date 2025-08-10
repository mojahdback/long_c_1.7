#include <stdio.h>

typedef struct {
    int id;
    char name[20];
    int Qantity;
    float price;
    char end[20];
}prodect;

void add(prodect prods[],int size,int *count){
    
    for(int i =0;i<size;i++){
        printf("\nProdect %d : \n",i+1);
        
        printf("\t\tNAME : ");
        scanf(" %[^\n]s",prods[*count].name);
       
        printf("\t\tID : ");
        scanf("%d",&prods[*count].id);
        
        printf("\t\tQUANTITE : ");
        scanf("%d",&prods[*count].Qantity);
        
        printf("\t\tPRICE : ");
        scanf("%f",&prods[*count].price);
    
        printf("\t\tEND : ");
        scanf(" %[^\n]s",prods[*count].end);
      
        (*count)++;
    }
    
    
}

void display(prodect prods[],int count){
    
    for(int i=0;i<count;i++){
        printf("\n************ PRODECT %d ************\n",i+1);
        printf("\tNAME : %s\n",prods[i].name);
        printf("\tID : %d\n",prods[i].id);
        printf("\tQANTITIE : %d\n",prods[i].Qantity);
        printf("\tPRICE : %.2f\n",prods[i].price);
        printf("\tENDE : %s\n",prods[i].end);
        printf("==========================================\n");
    }
}

void search(prodect prods[],int count){
    int id;
    int found =0;
    prodect *temp;
    printf("Enter ID of prodect: ");
    scanf("%d",&id);
    
    for(int i=0;i<count;i++){
        if(id == prods[i].id){
            found =1;
            temp = &prods[i];
        printf("\n************ There is Here ************\n");
        printf("\tNAME : %s\n",temp->name);
        printf("\tID : %d\n",temp->id);
        printf("\tQANTITIE : %d\n",temp->Qantity);
        printf("\tPRICE : %.2f\n",temp->price);
        printf("\tENDE : %s\n",temp->end);
        printf("=============== FOUND it ================\n");
        break;
            
        }
    }
    if(!found)
       printf("\n\tThere is no ID %d like that\n",id);
    
}

void modify(prodect prods[],int count){
      int id;
    int found =0;
    prodect *temp;
    printf("Enter ID of prodect: ");
    scanf("%d",&id);
    
    for(int i=0;i<count;i++){
        if(id == prods[i].id){
            found =1;
            temp = &prods[i];
        printf("\n************ There is Here ************\n");
        printf("\tNAME : %s\n",temp->name);
        printf("\tID : %d\n",temp->id);
        printf("\tQANTITIE : %d\n",temp->Qantity);
        printf("\tPRICE : %.2f\n",temp->price);
        printf("\tENDE : %s\n",temp->end);
        printf("=============== FOUND it ================\n");
        
        printf("\nEnter A New Information:\n");
        printf("\t\tNAME : ");
        scanf(" %[^\n]s",temp->name);
       
        printf("\t\tID : ");
        scanf("%d",&temp->id);
        
        printf("\t\tQUANTITE : ");
        scanf("%d",&temp->Qantity);
        
        printf("\t\tPRICE : ");
        scanf("%f",&temp->price);
    
        printf("\t\tEND : ");
        scanf(" %[^\n]s",temp->end);
      
        break;
            
        }
    }
    if(!found)
       printf("\n\tThere is no ID %d like that\n",id);
    
    
}

void delete(prodect prods[],int *count){
     int id;
    int found =0;
    printf("Enter ID of prodect: ");
    scanf("%d",&id);
    
    for(int i=0;i<*count-1;i++){
        if(id == prods[i].id){
            found =1;
        printf("\n************ There is Here ************\n");
        printf("\tNAME : %s\n",prods[i].name);
        printf("\tID : %d\n",prods[i].id);
        printf("\tQANTITIE : %d\n",prods[i].Qantity);
        printf("\tPRICE : %.2f\n",prods[i].price);
        printf("\tENDE : %s\n",prods[i].end);
        printf("=============== FOUND it ================\n");
        
        prods[i] = prods[i + 1];
            

        (*count)--;
        printf("\nYou Are Delete Prodect Has ID %d\n",id);
        break;
            
        }
         
    }
    if(!found)
       printf("\n\tThere is no ID %d like that\n",id);
    
    
}

void sort(prodect prods[],int count){
    int i,j;
    prodect temp;
    for(i=0;i<count -1;i++){
        for(j=0;j<count - 1-i;j++){
            if(prods[j].Qantity < prods[j +1].Qantity){
                temp = prods[j];
                prods[j]= prods[j+1];
                prods[j+1]=temp;
            }
        }
    }
    printf("\t\nsorting by Qantitie!\n");
}

int main()
{
    prodect prods[100];
    int count = 0;
    int size;
    int choix;
    
    do{
        printf("\tProdect Mangement Menu\n");
        printf("\t1 : Add Prodect\n");
        printf("\t2 : Display Prodects\n");
        printf("\t3 : Search for Prodect\n");
        printf("\t4 : Modify  Prodect\n");
        printf("\t5 : Delete  Prodect\n");
        printf("\t6 : Sorting By Qantity\n");
        printf("\t0 : Enter 0 To Skip\n");
        
        printf("Enter your choice: ");
        scanf("%d",&choix);
        
        switch(choix){
            
            case 1 : printf("How much prodect do you want to add: ");
                     scanf("%d",&size);
                     printf("\n================== START =================\n");
                     add(prods,size,&count);
                     printf("\n================== DONE ===================\n");
                     break;
                     
            case 2 : printf("\n================== START =================\n");
                     display(prods,count);
                     printf("\n================== DONE ===================\n");
                     break;
                
            case 3 : printf("\n================== START =================\n");
                     search(prods,count);
                     printf("\n================== DONE ===================\n");
                     break;
                    
            case 4 : printf("\n================== START =================\n");
                     modify(prods,count);
                     printf("\n================== DONE ===================\n");
                     break;
            
            case 5 : printf("\n================== START =================\n");
                     delete(prods,&count);
                     printf("\n================== DONE ===================\n");
                     break;
                     
            case 6 : printf("\n================== START =================\n");
                     sort(prods,count);
                     printf("\n================== DONE ===================\n");
                     break;
                     
            
            
            case 0 : printf("\tThanks for useing our systems!\n");
                     break;
                
            default : printf("\nPlease enter number between 1 to 6 or 0 to skip!!!\n");
                      break;
        }
        
        
        
        
        
        
        
        
    }while(choix != 0);
    
    
    
    

    return 0;
}
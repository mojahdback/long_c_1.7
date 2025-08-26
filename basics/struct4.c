#include <stdio.h>
typedef struct{
    char type[20];
    float prix;
    int quantity;
    float total;
}produit;

void add(produit p[],int *count){
   
    for(int i =0 ; i<1;i++){
       printf("\nEnter the informations about produit %d :\n",*count+1);
       printf("Name of produit: ");
       scanf("%s",p[*count].type);
       printf("Prix: ");
       scanf("%f",&p[*count].prix);
       printf("Quantity: ");
       scanf("%d",&p[*count].quantity);
       p[*count].total = (p[*count].prix * p[*count].quantity);
       (*count)++;
    
    }
}

void display(produit p[],int count){
    float full_total =0;
    int ami;
    float pays;
    printf("all prodects:\n");
    for(int i=0;i<count;i++){
      
        printf("\n%s --> %.2f -> %d => %.2f\n",p[i].type,p[i].prix,p[i].quantity,p[i].total);
        full_total += p[i].total; 
    }
    
    printf("\n### All Total are %.2f Drhms\n",full_total);
    printf("how much frinds you are? : ");
    scanf("%d",&ami);
    
    pays = full_total / ami;
    
    printf("everone you will paix : %.2f Drhms\n",pays);
    
}
int main()
{
    produit p[100];
    int count=0;
    int choose;
    
    add(p,&count);
    
    do{
         printf("\nfor add new prodect enter 1 or 0 to skip: ");
         scanf("%d",&choose);
    
    switch(choose){
        
        case 1 : add(p,&count);
                 break;
                 
        case 0 : display(p,count);
                 break;
        
        default : printf("unvailed choice!!!\n");
                  break;
    }
        
        
    }while(choose != 0);
   
   
    

    return 0;
}
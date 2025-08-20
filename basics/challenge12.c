#include <stdio.h>

int add(int a,int b){
    return a + b;
}

int mult(int a,int b){
    return a * b;
}
int dif(int a,int b){
    if(a>b)
      return a - b;
    else if(b>a)
      return b - a;
    else{
      printf("Equal!\n");
      return 0;
        
    }
}

int dive(int a,int b){
    if(b == 0){
      printf("imposible!\n");
      return 0;
    }
      
    else
       return a / b;
}


int main()
{
    int choix;
    int n1,n2;
    printf("number 1:");scanf("%d",&n1);
    printf("number 2:");scanf("%d",&n2);
    printf("1 . add\n2 . multiplication\n3. Diffrent\n4. Divson\n");
    printf("enter your choix: ");
    scanf("%d",&choix);
    int (*ptrfunc)(int ,int) = NULL;
    switch(choix){
        
     case 1:   ptrfunc = add;  break;
    
     case 2:   ptrfunc = mult;  break;
    
           
     case 3:   ptrfunc = dif;  break;
    
    
     case 4:    ptrfunc = dive;  break;
    
      default: printf("Invaild choice\n");
               break;
               
    }
    
    int res = ptrfunc(n1,n2);
    printf("%d",res);
        
    
 

    return 0;
}
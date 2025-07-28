#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void input(char text[50]){
    printf("\n  => Enter your text : ");
    fgets(text,50,stdin);
}

int len( char a[50]){
   
    int count =0;
    int i;
    char *p = a;
    for(i=0;i<strlen(a)-1;i++){
        if(*p++ != ' ' )
           count++;
    }

    printf("\n----->\tTotal characters : %d\n",count);
}

int num_words(char a[50]){
    int words =1;
    char *p = a;
    int i;
    for(i =0 ; i<strlen(a); i++){
        if(*(p+i) == ' ' )
           words++;
    }
    
    printf("\n----->\tTotal words : %d\n",words);
    
}

int sum_char(char a[50]){
    int upper =0;
    int lower =0;
    char *ptr = a;
    int i;
    for(i=0;i<strlen(a);i++){
        if(ptr[i] >= 'A' && ptr[i] <= 'Z')
             upper++;
        else if(ptr[i]>='a' && ptr[i] <= 'z')
             lower++;
        else
           continue;
    }
    
    printf("\n----->\tUpperCase letters: %d\n",upper);
    printf("\n----->\tLowerCase letters: %d\n",lower);

}
int num_char(char a[50]){
    char *p =a;
    int frq[50];
    int count;
    int i,j;
    int size = strlen(a);
    for(i=0;i<size;i++){
        frq[i] = -1;
    }
    for(i=0;i<size;i++){
        count = 1;
        for(j=i+1;j<size;j++){
          if(p[i] == p[j]){
              count++;
              frq[j]=0;
          }
            
        }
        if(frq[i] != 0)
           frq[i] = count;
    }
        
    
    
    for(i=0;i<size;i++){
        if(frq[i]> 0 )
           printf("\n\t=====>\t%c --> %d\n",*(p+i),frq[i]);
    }
    
}

void revew(char a[50]){
    char *p =a;
    int i;
    printf("\n----->WORDS :\n");
    printf("\n\t\t===>  ");
    for(i=0;i<strlen(a);i++){  
        if(p[i] != '\0' && p[i] != ' ')
            printf("%c",p[i]); 
           
        else
              printf("\n\t\t===>  ");
            
     
    }
}


int main()
{
   
   char text[50];
   int choix;
   
    printf("\t\t    Welcome to this Systems!\n");
       input(text);
   
    do{
      
       printf("\n\tPlease choose one number of this numbers???\n");
       printf("\t1 --> numbers  of characters .\n");
       printf("\t2 --> numbers  of words .\n");
       printf("\t3 --> sum  of characters uppercase and lowercase .\n");
       printf("\t4 --> how maney repit evry charachter.\n");
       printf("\t5 --> print every word a new line.\n");
       printf("\t0 --> enter zero to skip.\n");
       
       printf("\n\tChoose a number :");
       scanf("%d",&choix);
       
        switch(choix){
          
          case 1 :  printf("\n=================== Result ==================\n");
                    len(text);
                    printf("\n=================== End ==================\n");
                    break;
          case 2 :  printf("\n=================== Result ==================\n");
                    num_words(text);
                    printf("\n=================== End ==================\n");
                    break;
          case 3 :  printf("\n=================== Result ==================\n");
                    sum_char(text);
                    printf("\n=================== End ==================\n");
                    break;
          case 4 :  printf("\n=================== Result ==================\n");
                    num_char(text);
                    printf("\n=================== End ==================\n");
                    break;
          case 5 :  printf("\n=================== Result ==================\n");
                    revew(text);
                    printf("\n==================== End ==================\n");
                    break;
          default : printf("Invailed choice");
                    break;
           
        }
       
       
    }while(choix != 0);

   
   

    return 0;
}
#include <stdio.h>
#include <string.h>
int main()
{
  
    char M[20];
    char R[20];
    int i,j;
    
    printf("enteer a word :");
    scanf("%s",M);
    
    int len = strlen(M);
 
    for(j=0;j<len;j++){
        R[j] = M[len - 1 - j];
    }
    R[len]='\0';
       
    
    int n = strcmp(R,M);
    
    if(n==0)
       printf("plaindrom\n");
    else
       printf("no plaindrom");
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    return 0;
}
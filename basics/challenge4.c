#include <stdio.h>
#include <string.h>

int main()
{
    
    char name[20];
    int len=0;
    
    printf("enter a word:");
    scanf("%s",name);

    while(name[len] != '\0' && name[len] != '\n'){
        len++;
        
    }
   
    printf("number of charecter is %d\n",len);
    
    return 0;
}
#include <stdio.h>
#include <string.h>

int main()
{
    
    char name[20];
    int len=0;
    
    printf("enter a word:");
    scanf("%s",name);
    int i ;
    while(name[i] != '\0'){
        len++;
        i++;
    }
   
    printf("number of charecter is %d\n",len);
    
    return 0;
}
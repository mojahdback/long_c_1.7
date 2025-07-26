#include <stdio.h>
#include <string.h>

int main()
{
    
    char name[20];
    int upper=0;
    int lower=0;
    int i;
    
    printf("enter a word:");
    scanf("%s",name);
    
    for(i=0;i<strlen(name);i++){
        if(name[i]<='Z' && name[i] >= 'A')
           upper++;
           
        else if(name[i]<='z' && name[i] >= 'a')
           lower++;
        else
           continue;
    }
   
    printf("number of UPPER charecter is %d\n",upper);
     printf("number of LOWER charecter is %d\n",lower);
     
    return 0;
}
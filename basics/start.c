#include <stdio.h>
#include <string.h>
int main()
{
    
    char word[20];
    int upper =0;
    int lower =0;
    char upper_cs[20];
    char lower_cs[20];
    
    printf("enter a word: ");
    scanf("%s",word);
    
    int i;
    for(i=0;i<strlen(word);i++){
        if(word[i] <= 'Z' && word[i] >= 'A'){
            upper_cs[upper++] = word[i];
        }
        else if(word[i] <= 'z' && word[i] >= 'a'){
           
             lower_cs[lower++] = word[i];
        }
           
        else
           continue;
        
    }
    printf("number of UPPER charecter is %d its %s\n",upper,upper_cs);
    printf("number of LOWER charecter is %d its %s\n",lower,lower_cs);
    
    
    return 0;
}
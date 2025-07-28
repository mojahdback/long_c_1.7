#include <stdio.h>


int main()
{
   int arry[]={22,30,14,9,15,16,7,8,90,2};
   int *p;
   p = arry;
   int count=0;
   int i;
   int size = sizeof(arry)/sizeof(arry[0]);
   for(i=0;i<size;i++){
        if(*(p + i) > 10)
           count++;
        else
            continue;
   }
   
   printf("the number are big then 10 is %d",count);
  
    return 0;
}
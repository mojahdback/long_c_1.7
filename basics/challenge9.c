#include <stdio.h>


int main()
{
   int arry[]={14,9,7,8,2};
   int *p;
   p = arry;
   int i;
   int size = sizeof(arry)/sizeof(arry[0]);
   for(i=0;i<size;i++){
       printf("Value : %d - address : %p\n",*(p + i),p + i);
       
   }
   
   
  
    return 0;
}
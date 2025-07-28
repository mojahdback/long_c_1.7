#include <stdio.h>


int main()
{
   int arry[]={2,30,13,4,5,16,7,8,90,2};
   int *p;
   p = arry;
   int sum=0;
   int i;
   int size = sizeof(arry)/sizeof(arry[0]);
   for(i=0;i<size;i++){
      sum+= *(p + i) ;
   }
   
   printf("The sum is %d",sum);
  
    return 0;
}
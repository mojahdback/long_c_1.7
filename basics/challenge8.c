#include <stdio.h>

void swep(int *a,int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
   int x = 10, y = 34;
   
   swep(&x,&y);
   
   printf("x = %d\ny = %d",x,y);
  
  
    return 0;
}
#include <stdio.h>
#include <string.h>
int main()
{
  
  
  char T[20];
  char frq[20];
  int j,i;
  int count;
  int max;
  int index;
  
  printf("enter a name :");
  scanf("%s",T);
    for(i=0;i<strlen(T);i++){
      frq[i]= -1;
    }
  
  for(i=0;i<strlen(T);i++){
      count =1;
      for(j=i+1;j<strlen(T);j++){
          if(T[i]==T[j]){
              count++;
              frq[j]=0;
          }
      } 
       
        if(frq[i]!= 0){
            frq[i]=count;
        } 
      
  }
  max = frq[0];
  index = 0;
  for(i=0;i<strlen(T);i++){
      if(frq[i]>max){
          max = frq[i];
          index = i;
      }
  }
  
  printf("the chercter repit is %c repit %d fois ",T[index],max);
  
  
 
  

    return 0;
}
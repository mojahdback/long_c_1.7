
#include <stdio.h>


int main()
{
  int arr[10];
  int sum = 0 ;
  int index[10];
  int i;
  int count=0;
  printf("WELECOME:\n");
  for(i=0;i<10;i++){
    printf("[%d] = ",i+1);
    scanf("%d",&arr[i]);
  }
   
  for(i=0;i<10;i++){
    if((arr[i] > 0 )&&(arr[i]%2 == 0)){
      index[count] = i;
      sum += arr[i];
      count++; 
    }
  }
 
   printf("Positive numbers at index:");
   for(i=0;i<count;i++){
    printf("%d ",index[i]);
   }
  printf("\ncount = %d",count);
  printf("\nSum of positive values : %d",sum);




  return 0;
}
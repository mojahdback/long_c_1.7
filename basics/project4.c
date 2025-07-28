#include <stdio.h>
int main(){
    
    const char *oxab[3][3]={{"🎄","🎄","🎄"},{"🎄","🎄","🎄"},{"🎄","🎄","🎄"}};
    int i,j;
    printf("Welecome to place rabbit:\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++)
          printf("%6s ",oxab[i][j]);
        printf("\n");
    }
    int row,column;
    
  
        printf("Where should the rabbit go? 🐇\n");
        printf("please choose a row and column:");
        scanf("%d %d",&row,&column);
        
        if(row < 1 || row > 3 && column < 1 || column > 3){
            printf("Invalied choice try again!!");
            return 1;
        }
    
        oxab[row-1][column-1]="🐇";
    
    
    
    for(i=0;i<3;i++){
        for(j=0;j<3;j++)
           printf("%6s ",oxab[i][j]);
        printf("\n");
    }
    return 0;
}
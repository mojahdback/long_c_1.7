#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int player_guess,compuler_guess;
    srand(time(0));
    compuler_guess = rand() % 3 +1;
    printf("ROCK , PAPER, SCISSORES, Gaming Guessing !!!\n");
    printf("Please guessing one of them: \n");
    printf("1) Rock\n2) Paper\n3)Scissores\n ");
    scanf("%d",&player_guess);
    switch(compuler_guess){
        case 1 : printf("...ROCK...\n");break;
        case 2 : printf("...PAPER...\n");break;
        case 3 : printf("...SCISSORES...\n");break;
        
    }
    if((player_guess == 1 && compuler_guess == 3)||
      (player_guess == 2 && compuler_guess == 1)||
      (player_guess == 3 && compuler_guess == 2))
      printf("congratulations! you WIN\n");
    else if(player_guess == compuler_guess)
      printf("you are draw..");
    else 
      printf("Lost try again! ");
    

    return 0;
}
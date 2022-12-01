#include <stdio.h>
#include <time.h>
#include <stdint.h>
#include <time.h>
#include <stdlib.h>

//funtion calls
char userChoice();
char computerChoice();
void determineWinner();
char playAgain();


// global variable
char choice1, choice2;
char com_choice_1, comp_choice_2;
int option;
char play_choice;


int main() {
    srand(time(0));
   do{
       
        printf( "Greeting user enter your choice 'r', 'p', 's'. \n" );
        char choice1 = userChoice();
        char comp_choice_2 = computerChoice();
        printf("%c\n", comp_choice_2);
    
        determineWinner();
        char playAgain2 = playAgain();
   }while(playAgain() == 'y');
    

    return 0;
}

//user choice
char userChoice(){
    scanf("%c", &choice1);

    return choice1;
}

//computer choice
char computerChoice(){
    srand(time(0));
    int lower = 1, upper = 3;
    

    int roll = (rand() % (upper - lower + 1)) + lower;
    
    
    switch (roll)
    {
    case 1:
        com_choice_1 = 'r';
        break;
    case 2:
        com_choice_1 = 'p';
        break;
    case 3:
        com_choice_1 = 's';
        break;
    default:
        break;
    }
    

    return com_choice_1;
}

//determines who wins

void determineWinner(){
    if (choice1 == comp_choice_2 )
    {
        printf( "tie game.\n" );
    }

    else if (choice1 == 'r' && comp_choice_2 == 'p')
    {
        printf( "computer wins.\n" );
    }

    else if (choice1 == 'r' && comp_choice_2 == 's')
    {
        printf( "Player wins!.\n " );
    }

    else if (choice1 == 's' && comp_choice_2 == 'p')
    {
        printf( "user has won\n " );
    }

    else if (choice1 == 's' && comp_choice_2 == 'r')
    {
        printf( "computer has won.\n " );
    }

    else if (choice1 == 'p' && comp_choice_2 == 's')
    {
        printf( "computer wins\n" );
    }

    else
    {
        printf( "user wins\n" );
    }

}

char playAgain()
{
    

    printf("if you would like to play again press y: \n");
    printf("if not press n\n");
    scanf("%c", &play_choice);


    return play_choice;
}
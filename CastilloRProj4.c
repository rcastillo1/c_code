#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/*---------------------------------*/
int dice_func_1();

/*---------------------------------*/


int main()
{
    srand(time(0));
    // variables
    int dice1, dice2, dice3, dice4, i;
    dice1 = dice_func_1();
    dice2 = dice_func_1();
    dice3 = dice_func_1();
    dice4 = dice_func_1();
    int dice_roll_2 = dice3 + dice4;

    i = 0;
    //dice roll
    int dice_roll = dice1 + dice2;
 
    
    printf( "Ricky Castillo - Project 4: Craps \n" );
    
    printf( "Player rolled %i + %i = %i\n", dice1, dice2, dice_roll );

    switch ( dice_roll ) {
        
        case 7:
            printf( "player wins\n" );
            break;
        
        case 11:
            printf( "player wins\n" );
            break;
        
        case 2:
            printf( "player looses\n" );
            break;
        
        case 3:
            printf( "player looses\n" );
            break;
        
        case 12:
            printf( "player looses\n" );
            break;
        
        case 4:
            printf("player continues\n");
            
            while (i != dice_roll_2) {
                
                printf("player rolled a %d + %d = %d \n", dice3, dice4, dice_roll_2);
                
               if (dice_roll_2 == 7) {
                   printf("player looses");
                   i = 1;
                   break;
               }
                if(i == 1){
                    printf("congrats you win");
                }
           }
                   
        
        case 5:
            printf("player continues\n");
            
            while (i != dice_roll_2) {
                
                printf("player rolled a %d + %d = %d \n", dice3, dice4, dice_roll_2);
                

               if (dice_roll_2 == 7) {
                   printf("player looses");
                   i = 1;
                   break;
               }
                if(i == 1){
                    printf("congrats you win");
                }
           }

            

            
            
        
        
        case 6:
            printf("player continues\n");
            
            while (i != dice_roll_2) {
                
                printf("player rolled a %d + %d = %d \n", dice3, dice4, dice_roll_2);
              

               if (dice_roll_2 == 7) {
                   printf("player looses");
                   i = 1;
                   break;
               }
                if(i == 1){
                    printf("congrats you win");
                }
           }


           
          
        
        
        case 8:
            printf("player continues\n");
           
            
            while (i != dice_roll_2) {
                
                printf("player rolled a %d + %d = %d \n", dice3, dice4,
                    dice_roll_2);
                
              
                if (dice_roll_2 == 7) {
                   printf("player looses");
                   i = 1;
                   break;
               }
                if(i == 1){
                    printf("congrats you win");
                }
           }


          
           
        
        
        case 9:
            printf("player continues\n");
            
            while (i != dice_roll_2) {
                
                printf("player rolled a %d + %d = %d \n", dice3, dice4, dice_roll_2);
               
               if (dice_roll_2 == 7) {
                   printf("player looses");
                   i = 1;
                   break;
               }
                if(i == 1){
                    printf("congrats you win");
                }
           }


         
        
        
        case 10:
            printf("player continues\n");
            
            
            while (i != dice_roll_2) {
                
                printf("player rolled a %d + %d = %d \n", dice3, dice4, dice_roll_2);
               
               if (dice_roll_2 == 7) {
                   printf("player looses");
                   i = 1;
                   break;
               }
                if(i == 1){
                    printf("congrats you win");
                }
           }

            
            
        
        default:
                        break;
    }
   
    return 0;
}
    

//functions

int dice_func_1(){
    
    int roll_rand;
        roll_rand = rand() % 6 + 1;
    return roll_rand;
}



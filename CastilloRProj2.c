//Ricky castillo
//10/7/21

#include <stdio.h>

int main()
{
    /*for loop*/

    for(int i=0;i<2;i++)
    {
    //the variables start here
        int assignment_score_1, assignment_score_2, assignment_score_3, midterm, final_exam;
        double average_score, total_weight_score;
    
    /* asking users for their scores*/
    printf("Please enter your first score: ");
    scanf("%d", &assignment_score_1);
    
    printf("Please enter your second score: ");
    scanf("%d", &assignment_score_2);
    
    printf("Please enter your third score: ");
    scanf("%d", &assignment_score_3);
    
    printf("Please enter your mid term score: ");
    scanf("%d", &midterm);
    
    printf("Please enter your final exam score: ");
        scanf("%d", &final_exam);
    
    /*calculating the average and final score.*/
        average_score = (assignment_score_1 + assignment_score_2 + assignment_score_3) / 3.0;
        
        total_weight_score = (average_score * 0.4) + (midterm * 0.3) + (final_exam * 0.3);
        
        printf("your final score is: %f%%\n", total_weight_score);
    
    }
    return 0;
}


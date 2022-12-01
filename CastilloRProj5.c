#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//functions
void score_input();
void compute_grade();
void score_output();
//struct info
struct StudentRecord {
float quiz1;
float quiz2;
float midTerm;
float finalExam;
float TotalScore;
};




/*-----------------------------------------------*/
int main(){
struct StudentRecord student1;
struct StudentRecord student2;
struct StudentRecord student3;
struct StudentRecord student4;
struct StudentRecord student5;


score_input(&student1);
score_output(&student1);
compute_grade(&student1);

score_input(&student2);
score_output(&student2);
compute_grade(&student2);

score_input(&student3);
score_output(&student3);
compute_grade(&student3);

score_input(&student4);
score_output(&student4);
compute_grade(&student4);

score_input(&student5);
score_output(&student5);
compute_grade(&student5);



return 0;
}


//inputting student functions from records
void score_input(struct StudentRecord *student){
    
    
    printf( "enter two 10 point quizes: " );
    scanf( "%f ", &student->quiz1 );
    scanf( "%f", &student->quiz2 );


    printf( "\n enter the midterm and final exam grades. these are 100 point tests:" );
    scanf( "%f", &student->midTerm );
    scanf( "%f", &student->finalExam );
    
}

//printing the grades
void score_output(struct StudentRecord *student){

    printf("\nthe record for student number 1: %f, %f ", student->quiz1, student->quiz2 );
    printf("\nthe midterm and the final exam grades are: %f, %f\n", student->midTerm, student->finalExam);




}

void compute_grade(struct StudentRecord *student){
float TotalQuizScore, TotalScore;

TotalQuizScore = (student->quiz1 + student->quiz2);
TotalScore =  TotalQuizScore*(.25/1) + student->midTerm*(.25/1) + student->finalExam*(.50/1);
printf("\nthe numerical average is: %f.", TotalScore);

if (TotalScore >90)
{
    printf("\nand your letter grade assigned is A\n");
}
else if(TotalScore>=80 && TotalScore<90)
{
    printf("\nand your letter grade assigned is B\n");
}
else if(TotalScore>=70 && TotalScore<80)
{
    printf("\nand your letter grade assigned is C\n");
}
else if (TotalScore>=60 && TotalScore<70)
{
    printf("\nand your letter grade assigned is D\n");
}
else
{
    printf("\nand your letter grade assigned is F\n");
}



}
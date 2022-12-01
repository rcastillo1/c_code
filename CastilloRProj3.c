//Ricky Castillo
// Project 3 creating and sorting arrays
//10/19/21
//10/23/21
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
//defining the constants
#define ARRAY_SIZE 20
#define UPPER_LIMIT 20
#define LOWER_LIMIT 12
#define DATA_UPPER_LIMIT 90
#define DATA_LOWER_LIMIT 10

//defining functions
void Randomize_Numbers ();
void PrintArray ();
void FindMaxMin ();
void FindAverage ();
void Sort_Array_Bubble();
void Find_Median ();



//printing the array
void print_array(int first_array[])
    {

        int i;
        for(i=0;i<first_array;i++)
        {
            printf("%d ",first_array[i]);

        }
    }



//finding the max and min function
void FindMaxMin(int first_array[],int sample_size)
 {
     int min,max,i;
     min=max=first_array[0];
    for(i=1; i<sample_size; i++)
    {
         if(min>first_array[i])
          min=first_array[i];
           if(max<first_array[i])
            max=first_array[i];
    }
    
    printf("\nminimum of array is : %d",min);
    printf("\nmaximum of array is : %d\n",max);
 }

//defining sorting bubble function
void Sort_Array_Bubble(int first_array[], int sample_size)
{
      int i, d, t;
     
      for (i = 0 ; i < ( sample_size - 1 ); i++)
      {
        for (d = 0 ; d < sample_size - i - 1; d++)
        {
          if (first_array[d] > first_array[d+1])
          {
            t         = first_array[d];
            first_array[d]   = first_array[d+1];
            first_array[d+1] = t;
          }
        }
      }
    }
 }

//finding median function
void Find_median(int first_array[] , int sample_size)
{
    int median=0;
    
    // if statments even
    if(n%2 == 0)
        median = (first_array[(sample_size-1)/2] + first_array[sample_size/2])/2.0;
    // if statments odd are odd
    else
        median = first_array[sample_size/2];
    
    return median;
}



//printing all the functions here
int main()
{
  
    int sample_size, size, sum, average;
       
       printf("Ricky Castillo - Project 3 \n");
       int first_array[ARRAY_SIZE] = {10, 11, 12, 14, 13, 15, 25, 34, 4, 23, 45, 46, 47, 67, 78, 81, 89, 87, 86, 85};
       sample_size = sizeof(first_array)/sizeof(first_array[0]);
       
       printf("\nSample Size = %d\n", sample_size);
       
    printf("array elements: ");
       for (int i = 0; i < sample_size; i++)
       {
           printf("%d ", first_array[i]);
       }

    
    FindMaxMin(first_array,sample_size);
    
    FindAverage(first_array, sample_size);
    
    Sort_Array_Bubble(first_array, sample_size);
    
    Find_median(first_array, sample_size);

    printf("Ricky Castillo - end of Project 3 \n");
    return 0;
}

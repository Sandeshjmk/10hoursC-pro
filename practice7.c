/* Q1: Write a C program that takes user input for the marks of
 3 subjects and displays them using arrays. */
//  #include <stdio.h>
//  int main()
//  {
//     int marks[3];
//     for(int i=0;i<=2;i++)
//     {
//       printf("Enter the marks of [%d] student: ",i);
//       scanf("%d",&marks[i]);
//     }
//     printf("\n\n");
//     for(int i=0;i<=2;i++)
//     {
//         printf("Marks of [%d] student is: %d\n",i,marks[i]);
//     }
//     return 0;
   
//  }
 /*Q2: Create a C program to enter the price of 3 items, calculate
  their final cost with GST (18%), and print the results using 
  arrays.*/
//   #include <stdio.h>
//   int main()
//   {
//     float items[3];
//     for(int i=0;i<3;i++)
//     {
//         printf("Price of [%d] items is: ",i);
//         scanf("%f",&items[i]);
//     }
//     for(int i=0;i<3;i++)
//     {
//         printf("Total price of %d items is %.2f\n",i,(items[i]+(items[i]*0.18)));
//     }
//     return 0;
//   }
/* Q3: Initialize an array with values {34, 66, 33}. Write a C
 program to print the size of each element in the array. 
*/
#include <stdio.h>
int main()
{
    int arr[3]={34,66,33};
    for(int i=0;i<3;i++)
    {
        printf("%d\n",sizeof(arr[i]));
    }
    return 0;
}
/*In an arryay of numbers, find how many times does a number 'x'
occurs.*/
/* Write a program to print the largest number in an array.*/
/*Write a program to insert an element at the end of an arryay*/
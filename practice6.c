/* Q1: Write a C program to demonstrate the use of pointers by 
assigning and printing the address of a variable. 
*/
// #include <stdio.h>
// int main()
// {
//     int age = 12;
//     int *ptr = &age;
//     int **_ptr = &ptr;
//     printf("%d\n",*ptr);
//     printf("%d\n",&age);
//     printf("%d\n",**_ptr);
//     return 0;
// }
/*6: Illustrate call by value in C by defining a function 'square'
 and observing the value of the variable in the main function*/
//  #include <stdio.h>
//  #include <math.h>
//  int square(int squ);
//  int main()
//  {
//     int num=4;
//     square(num);    
//     return 0;
//  }
//  int square(int squ)
//  {
//     squ= squ*squ;
//     printf("Square is: %d",squ);
//     return 0;
//  }
 // call bb references
 /*6: Illustrate call by value in C by defining a function 'square'
  and observing the value of the variable in the main function*/
//   #include <stdio.h>
//   int square(int *squ);
//   int main()
//   {
//     int a = 3;
//     square(&a);
//     printf("Square is: %d\n",a);
//     return 0;
//   }
//   int square(int *squ)
//   {
//     *squ = (*squ)*(*squ);
//     printf("Square is: %d",*(squ));

//   }
/*8: Write a C program to swap the values of two numbers using 
pointers*/
// #include <stdio.h>
// int swap(int *num1,int *num2);
// int main()
// {
//     int n1=5,n2=8;
//     printf("Value before swapping \nNum1= %d\nNum2= %d\n",n1,n2);
//     swap(&n1,&n2);
//     printf("Value after swapping \nNum1= %d\nNum2= %d\n",n1,n2);

    
//     return 0;
// }
// int swap(int *num1,int *num2)
// {
//     int temp;
//      temp = *num1;
//     *num1 = *num2;
//     *num2 = temp;
// }
/*Q10: Create a C program with functions to calculate the sum,
 product, and average of two numbers, and print the average in 
 the main function*/
//  #include <stdio.h>
//  float sum(float num1,float num2);
//  float avg(float num1,float num2);
//  float pro(float num1,float num2);
//  int main()
//  {
//     float x,y;
//     printf("Enter the first number: ");
//     scanf("%f",&x);
//     printf("Enter the second number: ");
//     scanf("%f",&y);
//     printf("Sum is: %.2f\n",sum(x,y));
//     printf("Pro is: %.2f\n",pro(x,y));
//     printf("Avg is: %.2f\n",avg(x,y));

//     return 0;
//  }
// float sum(float num1,float num2)
// {
//     return num1 + num2;
// }
// float avg(float num1, float num2)
// {
//     return (num1+num2)/2;
// }
// float pro(float num1, float num2)
// {
//     return num1 * num2;
// }
/*11: Develop a C program to find the maximum number between two
 numbers using a pointer.*/
//  #include <stdio.h>
//  int maximum(int *num1, int *num2);
//  int main()
//  {
//     int num1,num2;
//     printf("Enter the num1: ");
//     scanf("%d",&num1);
//     printf("Enter the num2: ");
//     scanf("%d",&num2);
//     maximum(&num1,&num2);
//     return 0;
//  }
//  int maximum(int *num1, int *num2)
//  {
//     if(*num1 > *num2)
//     {
//         printf("first number %d is largest than %d.",*num1,*num2);
//     }
//     else if(*num2 > *num1)
//     {
//         printf("second number %d is largest than %d.",*num2,*num1);
//     }
//     else if(*num1 == *num2)
//     {
//         printf("Both are equal number.");
//     }
//     else
//     {
//         printf("Invalid input value.");
//     }
//     return 0;
//  }
 /*Q12: Write a C program to print all the letters in the
  English alphabet using a pointer*/
//   #include <stdio.h>
//   void alpha(int start,int end);
//   int main()
//   {
//     int start = 'A';
//     int end = 'Z';
//     printf("The alhabets are:\n");
//     alpha(start,end);
//     return 0;
//   }
//   void alpha(int start,int end)
//   {
//      char *current = &start;
//      while(*current <= end)
//      {
//         printf("%c\n",*current);
//         (*current)++;
//      }
//   }
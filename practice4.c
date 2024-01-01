/* Q1: Create a C program to print numbers from 1 to 100,000 using
 a for loop. */
//  #include <stdio.h>
//  int main()
//  {
//     for(int i=1;i<=100000;i++)
//     {
//         printf("%d\t",i);
//     }
//     return 0;
//  }
/*Q2: Write a C program to find the sum of the first 'n' natural
 numbers and print them in reverse order.*/
//  #include <stdio.h>
//  int main()
//  {
//     int n;
//     printf("Enter N : ");
//     scanf("%d",&n);
//     for(int i=n;i>=1;i--)
//     {
//         printf("%d\t",i);
//     }
//  }

/*// Q4: Implement a C program to print the table of a number
 input by the user. */
//  #include <stdio.h>
//  int main()
//  {
//     int num,mul;
//     printf("Enter N: ");
//     scanf("%d",&num);
//     for(int i=1;i<=10;i++)
//     {
//         mul = num*i;
//         printf("%d x %d = %d\n",num,i,mul);
//     }
//     return 0;
//  }
/*// Q5: Write a C program that keeps taking numbers as input from
 the user until an odd number is entered, using a break statement.*/
// #include <stdio.h>
// int main()
// {
//     int num;
//     while(num > 0)
//     {
//         printf("Enter number: ");
//         scanf("%d",&num);
//         if(num % 2 != 0)
//         {
//             break;
//         }
//         printf("%d\n",num);
//     }
//     return 0;
// }
/*// Q6: Create a C program to take input until a number that
 is a multiple of 7 is entered, using a break statement.*/
// #include <stdio.h>
// int main()
// {
//     int num;
//     while(num > 0)
//     {
//         printf("Enter a number: ");
//         scanf("%d",&num);
//         if(num % 7 == 0)
//             { 
//                 printf("%d is a multiple of 7.",num);
//                 break;
//             }
//         printf("%d\n",num);
//     }
//     return 0;
// }
/*Q7: Demonstrate the use of the continue statement in a C program 
to print numbers from 1 to 5 excluding 3.*/
// #include <stdio.h>
// int main()
// {
//     for(int i=1;i<=5;i++)
//     {
//         if(i == 2)
//         {
//             continue;
//         }
//         printf("%d\n",i);

//     }
//     return 0;
// } 
/* Q8: Write a C program to print numbers from 1 to 10 excluding
 6 using the continue statement.*/
//  #include <stdio.h>
//  int main()
//  {
//     for(int i=1;i<=10;i++)
//     {
//         if(i == 6)
//         {
//             continue;
//         }
//          printf("%d\n",i);
//     }
//     return 0;
//  }

// Q9: Develop a C program to print all odd numbers from 5 to 50. 
// #include <stdio.h>
// int main()
// {
//     for(int i=5;i<=50;i++)
//     {
//         if(i % 2 != 0)
//         {
//             printf("%d\n",i);
//         }  
//     }
//     return 0;
// }
/* Q10: Create a C program to calculate the factorial of a number 
'n'.*/ 
// #include <stdio.h>
// int main()
// {
//     int num=1,fact=1;
//     printf("Enter the number: ");
//     scanf("%d",&num);
//     for(int i=1;i<=num;i++)
//     {
//         fact*=i;
//     }
//     printf("Factorial of %d is %d",num,fact);
//     return 0;
// }

/* Q11: Write a C program to print the reverse table for a given
 number 'n'. */
#include <stdio.h>
int main()
{
    int num,mul;
    printf("Enter N: ");
    scanf("%d",&num);
    for(int i=10;i>=1;i--)
    {
        mul = num*i;
        printf("%d x %d = %d\n",num,i,mul);
    }
    return 0;
}
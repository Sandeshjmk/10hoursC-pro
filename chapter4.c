// loops control structure
// #include <stdio.h>
// int main()
// {
//    for(int i=1;i<=100000;i++)
//    {
//     printf("%d\n",i);
//    } 
// }
// print the sum of first n natural numbers
// #include <stdio.h>
// int main()
// {
//     int num,sum=0;
//     printf("Enter the number: ");
//     scanf("%d",&num);
//     for(int i=1,j=num;i<=num && j>=1;i++,j--)
//     {
//         sum+=i;
//         printf("%d\n",j);
//     }
//     printf("%d\n",sum);
//     return 0;
// }
// print them in reverse
// #include <stdio.h>
// int main()
// {
//     int num;
//     printf("Enter the number: ");
//     scanf("%d",&num);
//     for(int i=num;i>=1;i--)
//     {
//         printf("%d\n",i);
//     }
//   return 0;
// }
// Print the table of a number input by user
// #include <stdio.h>
// int main()
// {
//     int num,mul;
//     printf("Enter the number: ");
//     scanf("%d",&num);
//     for(int i=1;i<=10;i++)
//     {
//         mul=num*i;
//         printf("%d X %d = %d\n",num,i,mul);
//     }
//    return 0;
// }
// break statement (exit the loop)
// write a  program to keep taking numbers as input from users untiluser enters an odd number.
// #include <stdio.h>
// int main()
// {
//     int num;
//     do
//     {
//         printf("Enter the number: ");
//         scanf("%d",&num);
//         printf("%d\n",num);
//         if(num % 2 != 0)
//         break;
//     }while(num>0);
//     printf("Thank you!");
//     return 0;

// }
//keep taking numbers as input from user until
// user enters a number which is multiple of 7.
// #include <stdio.h>
// int main()
// {
//     int num;
//     do
//     {
//         printf("Enter the number: ");
//         scanf("%d",&num);
//         printf("%d\n",num);
//         if(num%7==0)
//         break;
//     } while (num>0);
//     printf("Thank you!");
//     return 0;
// }
// Continue loop
// #include <stdio.h>
// int main()
// {
//     for(int i=1;i<=5;i++)
//     {
//         if(i==3)
//         {
//             continue;
//         }
//          printf("%d\n",i);
//     }
//     return 0;
// }
// print all numbers from 1 to 10 except for 6
// #include <stdio.h>
// int main()
// {
//     for(int i=1;i<=10;i++)
//     {
//         if(i==6)
//         {
//             continue;
//         }
//         printf("%d\n",i);
//     }
//     return 0;
// }
// print all the odds number from 5 to 50
// #include <stdio.h>
// int main()
// {
//     for(int i=5;i<50;i++)
//     {
//         if(i%2 !=0)
//         {
//             printf("%d\n",i);
//         }
//     }
//     return 0;
// }
// print he factorial of a number n
// #include <stdio.h>
// int main()
// {
//     int fact=1,n;
//     printf("Enter the number: ");
//     scanf("%d",&n);
//     for(int i=1;i<=n;i++)
//     {
//         fact*=i;
//     }
//     printf("Factoraial of %d is %d",n,fact);
//     return 0;
// }
// print the reverse of the table for a number n.
// #include <stdio.h>
// int main()
// {
//     int n;
//     int mul=1;
//     printf("Enter the number: ");
//     scanf("%d",&n);
//     for(int j=10;j>=1;j--)
//     {
//         mul = n*j;
//         printf("%d x %d = %d\n",n,j,mul);
//     }return 0;
// }
// calculate the sum of all numbers between 5 and 50.(including 5 and 50)
// #include <stdio.h>
// int main()
// {
//     int sum=0;
//     for(int i=5;i<=50;i++)
//     {
//         sum+=i;
//     }
//     printf("Sum is: %d",sum);
//     return 0;
// }
// a. Search on what a "nested loop" is &  print this 
/*pattern using it.
 * * * * *
 * * * * *
 * * * * *
 * * * * *
 */
// #include <stdio.h>
// int main()
// {
//     for(int i=1;i<=5;i++)
//     {
//         for(int j=1;j<=5;j++)
//         {
//             printf("* ");
//         }
//         printf("\n");
//     }
//     return 0;
// }
// Write a progam to check if a number is prime or not.
#include <stdio.h>
int main()
{
    int isPrime;
    int flag=0;
    printf("Enter the number: ");
    scanf("%d",&isPrime);
    if(isPrime == 0 || isPrime == 1)
    {
        flag = 1;
    }

    for(int i= 2;i<=isPrime/2;i++)
    {
        if(isPrime% i == 0)
        {
            flag=1;
            break;
        }
    }
    if(flag == 0)
    {
        printf("number is prime.\n");
    }
    else
    {
        printf("Number is not prime.\n");
    }
    return 0;
}
// Write a program to print prime numbers in range.
// need to solve in further time
3
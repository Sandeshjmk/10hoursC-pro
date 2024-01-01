/*. Write a program to find the sum of natural numbers up to N. 
*/
// #include <stdio.h>
// int main()
// {
//     int num,sum=0;
//     printf("Enter Number: ");
//     scanf("%d",&num);
//     for(int i=1;i<=num;i++)
//     {
//         sum+=i;
//     }
//     printf("Sum = %d",sum);
//     return 0;
// }
/*Write a program to check the given number is prime
or not*/
// #include <stdio.h>
// int main()
// {
//     int num,flag = 0;
//     printf("Enter the number: ");
//     scanf("%d",&num);
//     if(num == 0 || num == 1)
//     {
//         flag = 1;
//     }
//     for(int i=2;i<num/2;i++)
//     {
//         if(num % i == 0)
//         {
//             flag = 1;
//             break;
//         }
//     }
//     if(flag == 0)
//     {
//         printf("%d is prime number.\n",num);
//     }
//     else
//     {
//         printf("%d is not prime number.\n",num);
//     }
//     return 0;
// }
/*3. Create a program to print the Fibonacci series up to N terms*/
// #include <stdio.h>
// int main()
// {
//     int fn,sn,tn,n;
//     fn=0;
//     sn=1;
//     tn = fn+sn;
//     printf("Enter number: ");
//     scanf("%d",&n);
//     printf("Fibnoacci terms: %d,%d, ",fn,sn);
//     for(int i=3;i<=n;i++)
//     {
//         printf("%d, ",tn);
//         fn = sn;
//         sn = tn;
//         tn = fn+sn;  
//     }
//     return 0;
// }
/*. Write a C program to calculate the factorial of a given number*/
// #include <stdio.h>
// int main()
// {
//     int num,fact=1,i;
//     printf("Enter Number: ");
//     scanf("%d",&num);
//     for(i=1;i<=num;i++)
//     {
//         fact*=i;
//     }
//      printf("Factorial of %d is %d",num,fact);
//     return 0;
// }
/*. Implement a program to check whether a given year is a leap year*/
// #include <stdio.h>
// int main()
// {
//     int year;
//     printf("Enter the year: ");
//     scanf("%d",&year);
//     if((year % 4 == 0&&year % 100 != 0)|| (year %400 == 0))
//     {
//         printf("%d is leap year.",year);
//     }
//     else
//     {
//         printf("%d is not leap year.",year);
//     }
//     return 0;
// }
/*. Create a program to print Pascal's Triangle*/
#
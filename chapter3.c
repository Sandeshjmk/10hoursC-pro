// Conditional Statement
// if statement
// #include <stdio.h>
// int main()
// {
//     int age = 5;

//     if (age == 4)
//     {
//         printf("Age is euqal to 4.");
//     }
    //    else
    //    {
    //         printf("Age is not equal to 4.")
    //    }
        
//     return 0;
// }
// else-if statement
// #include <stdio.h>
// int main()
// {
//     int num1,num2;
//     printf("Enter the number 1: ");
//     scanf("%d",&num1);
//     printf("Enter the number 2: ");
//     scanf("%d",&num2);
//     if(num1 > num2)
//         printf("Number 1 is greater than Number 2.");
//     else if (num2 > num1)
//         printf("Number 2 is greater than Number 3.");
//     else
//         printf("Invlaid number.Please try Again.");

// return 0;
    
// }
// ternary operator
// #include <stdio.h>
// int main()
// {
//     int age = 15;
//     age >= 18?printf("You can vote"):printf("Your is age is less than 18. so you cannot vote.");
//     return 0;
// }
// switch condition
// #include <stdio.h>
// int main()
// {
//     int day;
//     printf("Check what is today(use 1- 7 number): ");
//     scanf("%d",&day);

//     switch (day)
//     {
//         case 2:
//             printf("Sunday\n");
//             break;
//         case 1:
//             printf("Monday\n");
//             break;
//         case 6:
//             printf("Tuesday\n");
//             break;
//         case 4:
//             printf("Wednesday\n");
//             break;
//         case 5:
//             printf("Thursday\n");
//             break;
//         case 3:
//             printf("Firday\n");
//             break;
//         case 7:
//             printf("Saturday\n");
//             break;
//         default:
//             printf("You input invalid day. input(1-7) only");
//     }
//     return 0;
// }
// nested if-else
// #include <stdio.h>
// int main()
// {
//     int num;
//     printf("Enter number: ");
//     scanf("%d",&num);
//     if(num >= 0)
//     {
//         printf("Number is positive.");
//         if(num % 2 == 0)
//         {
//             printf("even\n");
//         }
//         else
//         {
//             printf("odd\n");
//         }
//     }
//     else
//     {
//         printf("Number is negative");
//     }
//     return 0;
// }
// Practice question
// Write a program to check if a student passed or failed
// marks > 30 is pass
// marks <=30 iS Fail
// #include <stdio.h>
// int main()
// {
//     int marks;
//     printf("Enter the marks (0-100): ");
//     scanf("%d",&marks);
//     // if(marks >= 0 && marks <=30 )
//     // {
//     //     printf("Student is failed.\n");
//     // }
//     // else if(marks >30 && marks <=100)
//     // {
//     //     printf("Student is passed.\n");
//     // }
//     // else 
//     // {
//     //     printf("Invalid marks.\n");
//     // }
//     // check using ternary operator
//     marks >= 0 && marks <=30?printf("Student failed,\n"):printf("Student passed");
//     return 0;
    
// }
// find the output type question
// #include <stdio.h>
// int main()
// {
//     int x = 2;
//     if(x=1){
//         printf("X is equal to 1.\n");
//     }
//     else{
//         printf("X is not equal to 1.\n");
//     }
//     return 0;
// }
// Write a program to find if a character entered by user is upper case or not.
// #include <stdio.h>
// int main()
// {
//     char ch;
//     printf("Enter the character: ");
//     scanf("%c",&ch);
//     if(ch >= 'A' && ch<='Z')
//     {
//         printf("%c is uppercase Character.\n",ch);
//     }
//     else if(ch >= 'a' && ch<='z')
//     {
//         printf("%c is lowercase Character.\n",ch);
//     }
//     else
//     {
//         printf("Invalid character.\n");
//     }
// }
// Write a program to check the digit is palindrome or not.
// #include <stdio.h>
// int main()
// {
//     int is_digit,sum=0,temp;
//     int mod;
//     printf("Enter the Digit: ");
//     scanf("%d",&is_digit);
//     temp = is_digit;
//     while(is_digit > 0)
//     {
//         mod = is_digit%10;
//         sum = sum + (mod*mod*mod);
//         is_digit = is_digit/10;
//     }
//     if(temp == sum)
//     {
//         printf("%d is Armstrong number.\n",temp);
//     }
//     else
//     {
//         printf("%d is not Armstrong number.\n",temp);
//     }
//     return 0;
// }
// Write a program to check the number is natural or not
#include <stdio.h>
int main()
{
    int num;
    printf("Enter the number: ");
    scanf("%d",&num);
    if(num > 0)
    {
        printf("%d is the natural number.\n",num);
    }
    else
    {
        printf("Number is not natural number.\n");
    }
}
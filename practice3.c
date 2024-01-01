// /*Q1: Write a C program to use if statement to check if a given
//  age is equal to 4 and print a corresponding message*/
 #include <stdio.h>
 int main()
 {
    int age=5;
    if(age == 4)
    {
        printf("Age equal to 4.");
    }
    else
    {
        printf("Age not euqal to 4.");
    }
    return 0;
 }
 /*Q2: Create a C program with if-else statements to compare two 
 numbers and print which one is greater or if they are equal*/
 #include <stdio.h>
 int main()
 {
    int num1,num2;
    printf("Enter the num1 value: ");
    scanf("%d",&num1);
    printf("Enter the num2 value: ");
    scanf("%d",&num2);
    if(num1 > num2)
    {
        printf("Num1 is greater than num2.");
    }
    else if(num2 > num1)
    {
        printf("Num2 is greater than num1.");
    }
    else if(num1 == num2)
    {
        printf("Both are euqal.");
    }
    else
    {
        printf("Please enter the integer value.");
    }
    return 0;
    
 }
/* Q3: Develop a C program using the ternary operator to determine
 if a person can vote based on their age. */
 #include <stdio.h>
 int main()
 {
    int age = 14;
    age>=18?printf("Person can vote."):printf("Person cannot vote.");
    return 0;
 }
// /* Q4: Implement a C program using a switch statement to print all
//  the day of the week based on the user's input*/
 #include <stdio.h>
int main()
{
    int num;
    printf("Enter the number (1-7) to check the day: ");
    scanf("%d",&num);
    switch (num)
    {
        case 1:
            printf("Sunday.");
            break;
        case 2:
            printf("Monday.");
            break;
        case 3:
            printf("Tuesday.");
            break;
        case 4:
            printf("Wednesday.");
            break;
        case 5:
            printf("Thursday.");
            break;
        case 6:
            printf("Friday.");
            break;
        case 7:
            printf("Saturday.");
            break;
        default:
            printf("Invalid input.");
        
        return 0;
    }
}
/* Q5: Write a C program with nested if-else statements to determine 
if a number is positive, negative, even, or odd. 
*/
#include <stdio.h>
int main()
{
    int num;
    printf("Enter the number: ");
    scanf("%d",&num);
    if(num > 0)
    {
        printf("%d Number is positive",num);
        if(num % 2 == 0)
        {
            printf("%d is even number.",num);
        }
        else if(num % 2 != 0)
        {
            printf("%d is odd number.",num);
        }
    }
    else
    {
        printf("%d Number is Negative.",num);
    }
    return 0;
}
// /* Q6: Develop a C program to check if a student has passed or
//  failed based on their marks*/
 #include <stdio.h>
 int main()
 {
    int marks;
    printf("Enter the marks(0-100) of a student: ");
    scanf("%d",&marks);
    if(marks >=40 && marks <=100)
    {
        printf("Student is passed.");
    }
    else if(marks <= 40 && marks>=0)
    {
        printf("Student is failed.");
    }
    else
    {
        printf("Marks in Invalid.");
    }
    return 0;
 }
//  /*:Implement a C program to check if a character entered by the 
//  user is uppercase or lowercase*/
 #include <stdio.h>
 int main()
 {
    char ch;
    printf("Enter the Character(A-Z) to (a-z): ");
    scanf("%c",&ch);
    if(ch >= 'A' && ch <='Z')
    {
        printf("%c is Uppercase Character.",ch);
    }
    else if(ch >= 'a' && ch<='z')
    {
        printf("%c is Lowercase Character.",ch);
    }
    else
    {
        printf("You have entered invalid Character.");
    }
    return 0;
 }
 /* Q9: Develop a C program to check if a given digit is a armstrong
  or not.*/
#include <stdio.h>
int main()
{
    int digit,sum=0;
    printf("Enterd the digits: ");
    scanf("%d",&digit);
    int val = digit;
    while(digit > 0)
    {
        int mod = digit % 10;
        sum = sum+(mod*mod*mod);
        digit = digit/10;
    }
    if(val == sum)
    {
        printf("%d is Armstrong digit.",val);
    }
    else
    {
        printf("%d is not Armstrong Digit.",val);
    }
    return 0;

}
/* Q9: Develop a C program to check if a given digit is a 
palindrome or not.*/
#include <stdio.h>
int main()
{
    int num,mod,rev=0,n;
    printf("Enter the number: ");
    scanf("%d",&n);
    num=n;
    while(n > 0)
    {
        mod = n % 10;
        rev= rev*10+mod;
        n = n/10;
    }
    if(num == rev)
    {
        printf("%d is palindrome number.\n",num);
    }
    else
    {
        printf("%d is not palindrome number.\n",num);
    }
    return 0;
}
/*Q10: Create a C program to check if a given number is a natural 
number or not.*/
#include <stdio.h>
int main()
{
    int num;
    printf("Enter the number: ");
    scanf("%d",&num);
    if(num > 0)
    {
        printf("%d is a natual number.",num);
    }
    else
    {
        printf("%d is not a natual number.",num);
    }
    return 0;
}

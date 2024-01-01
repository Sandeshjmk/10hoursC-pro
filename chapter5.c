// Function in c
// #include <stdio.h>
// void printhello(); // function prototype
// int main()
// {
//     printhello();     // function call
//     printhello();
//     return 0;
// }
// void printhello()
// {
//     printf("Hello\n"); // function definition
//     printf("My name is Sandesh Jamkatel\n");
// }
// Write  2 functions- one to print "Hello" & second to print "good bye".
// #include <stdio.h>
// void Hello();
// void good();
// int main()
// {
//     good();
//     Hello();
//     return 0;
// }
// void Hello()
// {
//     printf("Hello\n");
// }
// void good()
// {
//     printf("Goodbye\n");
// }
// Write a function that prints Namaste if user is indian &
// BOnjour if the user is french
// #include <stdio.h>
// void is_indian();
// void is_french();
// int main()
// {
//     char user;
//     printf("What is your nationality?.Print 'I' for indian or 'F for french.");
//     scanf("%c",&user);
//     if(user == 'I')
//     {
//         is_indian();
//         return 0;
//     }
//     else if(user == 'F')
//     {
//         is_french();
//     }
// }
// void is_indian()
// {
//     printf("Namaste.\n");
// }
// void is_french()
// {
//     printf("Bonjour.\n");
// }
// Sum of function with arguments and return value
// #include <stdio.h>
// void num(int a);
// int main()
// {
//     int n;
//     printf("Enter a number:\n");
//     scanf("%d",&n);
//     num(n); // arguments 
//     return 0;

// }
// void num(int a)      // parameter  
// {
//     for(int i=1;i<=10;i++)
//     {
//         printf("%d\n",i*a);  
//     }

// }
// Use library functions to calculate the square of a number given
// by user.
// #include <stdio.h>
// #include <math.h>
// int main()
// {
//     float num;
//     printf("Enter the number: ");
//     scanf("%f",&num);
//     printf("Square is: %.2f",pow(num,2));
//     return 0;
    
// }
// Write functions to calculate area of a square , a circle &
// a rectangle
// #include <stdio.h>
// #define PI 3.1415
// void square();
// void circle();
// void rectangle();
// int main()
// {
//     square();
//     circle();
//     rectangle();

// }
// void square()
// {
//     int side,squ;
//     printf("Enter the side of square: ");
//     scanf("%d",&side);
//     squ = side*side;
//     printf("Area of square is: %d\n",squ);
// }
// void circle()
// {

//     float  radius;
//     printf("Enter the radius: ");
//     scanf("%f",&radius);
//     float area = PI*radius*radius;
//     printf("Area of circle is: %.2f\n",area);
// }
// void rectangle()
// {
//     int l,b,a;
//     printf("Enter the length: ");
//     scanf("%d",&l);
//     printf("Enter the breadth: ");
//     scanf("%d",&b);
//     a = l*b;
//     printf("Area of rectangle is: %d\n",a);

// }
// Recursion function in c
// #include <stdio.h>
// void recursion(int count);
// int main()
// {
//     recursion(5);
//     return 0;
// }
// // recursive function
// void recursion(int count)
// {
//     if(count == 0)
//     {
//         return;
//     }
//     printf("Hello World\n");
//     recursion(count - 1);
// }
// Sum of first n natural number
// #include <stdio.h>
// int recursion();
// int main()
// {
//     int num=1,sum;
//     printf("Enter the number: ");
//     scanf("%d",&num);
//     sum=recursion(num);
//     printf("Sum of n natural number using recursion is: %d",sum);
//     return 0;
// }
// int recursion(int n)
// {
//     if(n>0)
//     {
//         return n+ recursion(n-1);
//     }
//     else
//     {
//         return 0;
//     }
// }
// Factorial of n using recursion
// #include <stdio.h>
// int fact(int num);
// int main()
// {
//     int num;
//     printf("Enter the number: ");
//     scanf("%d",&num);
//     int Factorial = fact(num);
//     printf("Factorial of %d is %d",num,Factorial);
//     return 0;
// }
// int fact(int num)
// {
//     if(num >=1)
//     {
//         return num*fact(num-1);
//     }
//     else
//     {
//         return 1;
//     }
// }
// Write a function to convert celsius to fahrenheit
// #include <stdio.h>
// float celFah(float cel);
// int main()
// {
//     float cel,faha;
//     printf("Enter the Temperature in celcius: ");
//     scanf("%f",&cel);
//     faha = celFah(cel);
//     printf("Temperature in Fahrenheit is: %.2f",faha);
//     return 0;

// }
// float celFah(float cel)
// {
//     int fah = (cel * 9/5)+32;
//     return fah; 
// }
//Write a function to calculate percentage of a student from marks in science, math & Sanskrit.
// #include <stdio.h>
// float marks(float sci,float math,float Sanskrit);
// int main()
// {
//     float sci,math,Sanskrit;
//     printf("Enter the Marks in Sceince: ");
//     scanf("%f",&sci);
//     printf("Enter the Marks in Math: ");
//     scanf("%f",&math);
//     printf("Enter the Marks in Sanskrit: ");
//     scanf("%f",&Sanskrit);
//     printf("Percentage is: %.2f",marks(sci,math,Sanskrit));
//     return 0;

// }
// float marks(float sci,float math,float Sanskrit)
// {

//     return ((sci+math+Sanskrit)/3);

// }
// Write a function to print n terms of the fibonacci sequence
// #include <stdio.h>
// int fibo(int num);
// int main()
// {
//     int num;
//     printf("Enter the number: ");
//     scanf("%d",&num);
//     printf("Fibonacci is: %d",fibo(num));
//     return 0;

// }
// int fibo(int num)
// {
//     if(num == 0)
//     {
//         return 0;
//     }
//     else if(num == 1)
//     {
//         return 1;
//     }
//     else
//     {
//         return fibo(num-1) + fibo(num-2);
//     }
    
// }
// Write a function to find sum of digits of a number
// #include <stdio.h>
// int sum_dig(int num);
// int main()
// {
//     int num;
//     printf("Enter the digits: ");
//     scanf("%d",&num);
//     printf("Sum of a digits is :%d",sum_dig(num));
//     return 0;
// }
// int sum_dig(int num)
// {
//     int mod,sum=0;
//      for(int i=1;i<=num;i++)
//     {
//         mod=num%10;
//         sum+=mod;
//         num = num/10;
//     }
//     return sum;
// }
// Write a function to find sqaure root of a number
// #include <stdio.h>
// #include <math.h>
// float sqt(float num);
// int main()
// {
//     float num;
//     printf("Enter the number: ");
//     scanf("%f",&num);
//     printf("Square root a number is: %.2f",sqrt(num));
//     return 0;
// }
// float sqt(float num)
// {
//     return sqrt(num);
// }
// Write a function to print "Hot" or "Cold" depend on the 
//temperature user enters.
// #include <stdio.h>
// void iscold(int temp);
// int main()
// {
//     int tem;
//     printf("Enter the Today's Temperature: ");
//     scanf("%d",&tem);
//     iscold(tem);
//     return 0;
// }
// void iscold(int temp)
// {
//     if(temp < 20)
//     {
//         printf("It is cold ,Please Wear Warm Colthes. Thank you!");
//     }
//     else if(temp > 20)
//     {
//         printf("It is Hot, So enjoy your time With some cold drinks. Thank you!");
//     }

// }
// Make your own pow function
#include <stdio.h>
int pow(int num);
int main()
{

}
int pow(int num)
{
    return num*num;
}
// i will cover this topic after completa all 
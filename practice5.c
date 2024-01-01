/* Q1: Create a C program with a function to print "Hello" multiple 
times.*/
// #include <stdio.h>
// int hello();
// int main()
// {
//     hello();
//     hello();
//     return 0;
// }
// int hello()
// {
//     printf("Hello World!");
//     printf("\n");
//     return 0;
// }
/* Q2: Write a C program with two functions, one to print "Hello"
 and the other to print "Goodbye"*/
//  #include <stdio.h>
//  int hello();
//  int goodBye();
//  int main()
//  {
//     hello();
//     goodBye();
//     return 0;
//  }
//  int hello()
//  {
//     printf("Hello\n");
//     return 0;
//  }
//  int goodBye()
//  {
//     printf("Goodbye\n");
//     return 0;
//  }
 /*3: Develop a C program with functions to print "Namaste" for
Indian users and "Bonjour" for French users based on user input*/
// #include<stdio.h>
// int isIndian();
// int isFrench();
// int main()
// {
//    char ch;
//    printf("Press I for Indian or Press  F for french: ");
//    scanf("%c",&ch);
//    if(ch == 'I')
//    {
//       isIndian();

//    }
//    else if(ch == 'F')
//    {
//       isFrench();
//    }
//    return 0;
// }
// int isIndian()
// {
//    printf("Namaste!\n");
//    return 0;
// }
// int isFrench()
// {
//    printf("Bonjour!\n");
//    return 0;
// }


/* Q4: Implement a C program with a function that takes an argument
 'n' and prints the multplication table of 'n'*/
// #include <stdio.h>
// void mul(int n);
// int main()
// {
//    int num;
//    printf("Enter the number: ");
//    scanf("%d",&num);
//    mul(num);
//    return 0;
// }
// void mul(int n)
// {
//    for(int i=1;i<=10;i++)
//    {
//      printf("%d x %d = %d\n",n,i,i*n);
//    }
// }
/* Q5: Create a C program that uses library functions to calculate
 the square of a number entered by the user. */
//  #include <stdio.h>
//  #include <math.h>
//  int main()
//  {
//    int num;
//    printf("Enter the number: ");
//    scanf("%d",&num);
//    int squ = pow(num,2);
//    printf("%d",squ);
//    return 0;
//  }
 /*Q6: Write a C program with functinons to calculate the area of a
  square, circle, and rectangle*/
//   #include <stdio.h>
//   #define PI 3.1415 
//   int square(int side);
//   int circle(int rad);
//   int rectangle(int l,int b);
//   int main()
//   {
//     int side,squ;
//     float r,area_of_circle;
//     int length,breadth,area_of_rectangle;
//     printf("Enter the side: ");
//     scanf("%d",&side);
//     squ = square(side);
//     printf("Square is: %d",squ);
//     printf("\n\n");
//     printf("Enter the Radius: ");
//     scanf("%f",&r);
//     area_of_circle=circle(r);
//     printf("Area of circle is: %.2f",area_of_circle);
//     printf("\n\n");
//     printf("Enter the Length: ");
//     scanf("%d",&length);
//     printf("Enter the Breadth:  ");
//     scanf("%d",&breadth);
//     area_of_rectangle=rectangle(length,breadth);
//     printf("Area of rectangle is: %d",area_of_rectangle);
//     return 0;
//   }
//   int square(int side)
//   {
//    return side*side;
//   }
//   int circle(int rad)
//   {
//       int area = PI*rad*rad;
//       return area;
//   }
//   int rectangle(int l,int b)
//   {
//       return l*b;
//   }
  /*  Q7: Develop a C program with a recursive function to print
   "Hello World"a specified number of times*/
   // #include <stdio.h>
   // int recursion(char ch);
   // int main()
   // {
   //    recursion(5);
   //    return 0;
   // }
   // int recursion(char ch)
   // {
   //    if(ch == 0)
   //    {
   //       return 0;
   //    } 
   //    printf("Hello World!\n");
   //    recursion(ch -1);
   // }
   /* Q8: Implement a C program to find the sum of the first 'n' 
   natural numbers using recursion. */
   // #include <stdio.h>
   // int sum(int n);
   // int main()
   // {
   //    int num,sum_n;
   //    printf("Enter the number: ");
   //    scanf("%d",&num);
   //    sum_n= sum(num);
   //    printf("Sum of first n natual number is: %d",sum_n);
   //    return 0;
   // }
   // int sum(int n)
   // {
   //    if(n > 0)
   //    {
   //       return n+sum(n-1);
   //    }
   //    else
   //    {
   //       return 0;
   //    }
   // }
   /*  Q9: Write a C program with a recursive function to calculate 
   the factorial of a number 'n'.*/
   // #include <stdio.h>
   // int recursion(int n);
   // int main()
   // {
   //    int num,fact=1;
   //    printf("Enter the number: ");
   //    scanf("%d",&num);
   //    fact=recursion(num);
   //    printf("factorial of %d is %d",num,fact);
   //    return 0;
      
   // }
   // int recursion(int n)
   // {
   //    if(n == 0)
   //    {
   //       return 1;
   //    }
   //    else
   //    {
   //       return n*recursion(n-1);
   //    }
   // }

/*// Q10: Create a C program with a function to convert Celsius 
to Fahrenheit.*/
// #include <stdio.h>
// float convert(float cel,float fah);
// int main()
// {
//    float c,f,cel;
//    printf("Enter the Fahrenheit: ");
//    scanf("%f",&f);
//    cel= convert(c,f);
//    printf("fahrenheit to Celcius: %.2f",cel);
//    return 0;
// }
// float convert(float cel,float fah)
// {
//    cel = (fah-32)*5/9;
//    return cel;
// }
/*/ Q11: Develop a C program with a function to calculate the
 percentage of a student from marks in different subjects. */
//  #include <stdio.h>
//  int percentage(int eng,int math,int science,int c,int java);
//  int main()
//  {
//    float p;
//    p = percentage(94,95,90,93,80);
//    printf("Percentage got  by student is:%.2f",p);
//    return 0;
//  }
//  int percentage(int eng,int math,int science,int c,int java)
//  {
//    float per;
//    per = (eng+math+science+c+java)/5;
//    return per;
//  }
 /*implement a C program with a function to print the first 'n'
  terms of  Fibonacci sequence*/
  // #include <stdio.h>
  // int fib(int num);
  // int main()
  // {
  //   int num,fibonacci;
  //   printf("Enter the numebr: ");
  //   scanf("%d",&num);
  //   fibonacci = fib(num);
  //   printf("Fibonacci sum is: %d",fibonacci);


  //   return 0;

  // }
  // int fib(int num)
  // {
  //   if(num == 0 )
  //   {
  //     return 0;
  //   }
  //   else if(num == 1)
  //   {
  //     return 1;
  //   }
  //   else
  //   {
  //     return fib(num-1) + fib(num-2);
  //   }
    
  // }
  /* Q14: Develop a C program with a function to find the 
  square root of a number*/
  // #include <stdio.h>
  // #include <math.h>
  // int main()
  // {
  //   int num,sqroot;
  //   printf("Enter the number: ");
  //   scanf("%d",&num);
  //   sqroot = sqrt(num);
  //   printf("Square root a %d is %d",num,sqroot);
  //   return 0;
    
  // }
  /* Q15: Create a C program with a function to print "Hot" or
"Cold" based on the temperature entered by the user. */
#include <stdio.h>
int hotORcold(int temp);
int main()
{
  int tmp;
  printf("Enter the Temperature: ");
  scanf("%d",&tmp);
  hotORcold(tmp);
  return 0;
}
int hotORcold(int temp)
{
  if(temp > 15 && temp <= 70)
  {
    printf("Temperature is high.Please keep your environment cool.\n");
  }
  else if(temp <=15)
  {
    printf("Temperature is cold. Please keep your environment Warm.\n");
  }
  else if(temp>70)
  {
    printf("This is High Alert Temperature.\n");
  }
  return 0;
}
/* Q16: Design a C program with your own implementaƟon of the pow
 function.*/


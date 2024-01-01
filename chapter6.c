// Pointers in c
//  A variables that stores the memory address of another variables
// #include <stdio.h>
// int main()
// {
//     int age = 32;
//     int *ptr = &age;
//     int add= &ptr;
//     printf("%d",_age);
//     return 0;
// }
// #include <stdio.h>
// int main()
// {
//     int age = 32;
//     int *ptr = &age;
//     printf("%d\n",age);
//     printf("%d\n",*ptr);
//     printf("%d\n",*(&age));

// }
//let's check the output
// #include <stdio.h>
// int main()
// {
//    int *ptr;
//    int x;
//    ptr = &x;
//    *ptr = 0;
//    printf("x = %d\n",x);
//    printf("* = %d\n",*ptr);

//    *ptr +=5;
//    printf("x = %d\n",x);
//    printf("* = %d\n",*ptr);

//    (*ptr)++;
//    printf("x = %d\n",x);
//    printf("* = %d\n",*ptr);


//     return 0;
// }
// Pointer to pointer
// A variable that stores the memory address of another pointer
// #include <stdio.h>
// int main()
// {
//     float price = 100.00;
//     float *star = &price;
//     float **ptr = &ptr;
//     return 0; 
// }
// print the value of 'i' from is pointer to pointer
// #include <stdio.h>
// int main()
// {
//     int i =5;
//     int *ptr = &i;
//     int **pptr = &ptr;
//     printf("%d",**pptr);
//     return 0;
// }
// pointer in function call
// call by value -- WE Pass value of variables as argument
// #include <stdio.h>
// void square(int n);
// int main()
// {
//     int n=4;
//     square(n);
//     printf("Number  is = %d",n);
//     return 0;
// }
// // call by value
// void square(int n)
// {
//     n = n*n;
//     printf("Square = %d\n",n);

// }
// call by reference
// #include <stdio.h>
// void _square(int *n);
// int main()
// {
//     int number = 4;
//     _square(&number);
//     printf("Number = %d\n",number);
//     return 0;
    
// }
// void _square(int *n)
// {
//     *n = (*n)*(*n); // 4*4
//     printf("Square = %d\n",*n);

// }
// Swap 2 numbers , a & b
// #include<stdio.h>
// void swap(int *a,int *b);
// int main()
// {
//     int a = 5;
//     int b = 3;
//     printf("Value before Swapping\n%d\n%d\n",a,b);
//     swap(&a,&b);
//     printf("Value after Swapping \n%d\n%d\n",a,b);
//     return 0;   
// }
// void swap(int *a,int *b)
// {
//     int temp ;
//     temp  = *a;
//     *a = *b;
//     *b = temp;
     
// }
// Will the address output be same?
// #include <stdio.h>
// void printAddress(int n);
// int main()
// {
//     int n=4;
//     printf("%p\n",&n);
//     printAddress(n);
//     return 0;
// }
// void printAddress(int n)
// {
//     printf("%p\n",&n);
// }
// Write a function to calculate the sum, product & average of 2 numbers 
//. print the average in the main function
// #include <stdio.h>
// float sum(float *num1,float *num2);
// float avg(float *num1,float *num2);
// float pro(float *num1,float *num2);
// int main()
// {
//     float num1,num2;//add=0,prod;
//     float aver;
//     printf("Enter the first number: ");
//     scanf("%f",&num1);
//     printf("Enter the Second number: ");
//     scanf("%f",&num2);
//     add=sum(&num1, &num2);
//     printf("Sum of 2 numbers is: %.2f\n",add);
//     prod = pro(&num1, &num2);
//     printf("Product of 2 number is: %.2f\n",prod);
//     aver = avg(&num1, &num2);
//     printf("Average of 2 number is: %.2f\n",aver);
//     return 0;
    
// }
// float sum(float *num1,float *num2)
// {
//     int add;
//     add = *num1 + *num2;
//     return add;
// }
// float pro(float *num1,float *num2)
// {
//       int product = (*num1) * (*num2);
//       return product;
       
// }
// float avg(float *num1,float *num2)
// {
//     float average = ((*num1)+(*num2))/2.0;
//     return average;
// }
// Write a program in c to find the maximum number between two
// numbers using a pointer.
// #include <stdio.h>
// int largest (int *num1,int *num2);
// int main()
// {
//     int num1,num2,large;
//     printf("Enter the first number: ");
//     scanf("%d",&num1);
//     printf("Enter the Second number: ");
//     scanf("%d",&num2);
//     large=largest(&num1,&num2); 
//     printf("Maximum number between %d and %d is %d",num1,num2,large);
//     return 0;
// }
// int largest (int *num1,int *num2)
// {
//     int temp;
//     if(*num1 > *num2)
//     {
//         temp = *num1;
//         return temp;
//     }
//     else if(*num2 > *num1)
//     {
//         temp = *num2;
//         return temp;
//     }
//     else if(*num2 == *num1)
//     {
//         return 0;
//     }
//     return 0;
// }
// Write a program in c to print all the letters in english alpahabet
// using a pointer.
#include <stdio.h>

void alpha(char start, char end);

int main() {
    char start = 'A';
    char end = 'Z';
    printf("The alphabet characters are:\n");
    alpha(start, end);
    return 0;
}

void alpha(char start, char end) {
    char *current = &start;
    while (*current <= end) {
        printf("%c ", *current);
        current++;
    }
    fflush(stdout); // Add this line
}
/*
// Q4: Implement a C program using a switch statement to print all
 the day of the week based on the user's input*/
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
        default:
            printf("Invalid input.");
        
        return 0;
    }
    



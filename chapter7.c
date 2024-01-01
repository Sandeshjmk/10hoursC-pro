// Arrys in c
// collection of similar data types stored at contigous memory locations
// #include <stdio.h>
// int main()
// {
//     int marks[3];
//     for(int i=0;i<=2;i++)
//     {  
//        printf("Enter the marks of [%d] Subject: ",i); 
//        scanf("%d",&marks[i]);
//     }
//     printf("\n\n");
//     for(int i=0;i<=2;i++)
//     {
//         printf("Marks in [%d] Subject is: %d\n",i,marks[i]);
//     }
//     return 0;
// }

// Write a program to enter price of 3 items & print their final
// cost with gst
// #include <stdio.h>
// #define GST 0.18
// int main()
// {
//     float price[3];
//     for(int i=0;i<=2;i++)
//     {
//         printf("Enter the price of [%d] items : ",i);
//         scanf("%f",&price[i]);
//     }
//     printf("\n\n");
//     for(int i=0;i<=2;i++)
//     {
//         printf("Total Price of [%d] item is: %.2f\n",i,price[i]+(GST*price[i]));
//     }
//     return 0;
     
// }
// Initilization of arrays
// #include <stdio.h>
// int main()
// {
//     int marks[]={34,66,33};
//     for(int i=0;i<=2;i++)
//     {
//         printf("%d\n",sizeof(marks[i]));
//     }
//     return 0;
// }
// Pointer Arithmetic
// #include <stdio.h>
// int main()
// {
    // int age;
    // int *ptr = &age;
    // float price = 100.00;
    // float *ptr = &price;
    // char ch = 'h';
    // char *ptr = &ch;
    // printf("Value of ptr = %u\n",ptr);
    // ptr--;
    // printf("Value of ptr = %u",ptr);

    // printf("Value of ptr = %u\n",ptr);
    // ptr++;
    // printf("Value of ptr = %u\n",ptr);
    
    // printf("Ptr value = %u\n",ptr);
    // ptr++;
    // printf("Ptr value = %u\n",ptr);
    // return 0;
// }
// #include <stdio.h>
// int main()
// {
//     int age =22;
//     int _age = 23;
//     int *ptr = &age;
//     int *_ptr = &_age;
//     printf("%u, %u,differences = %u\n",ptr,_ptr,ptr-_ptr);
//     _ptr = &age;
//     printf("comparsion  = %u\n",_ptr == ptr);
//     return 0;

// }
// Array is a pointer
// #include<stdio.h>
// int main()
// {
//     int aadhar[5];
//     int *ptr =&aadhar[0];
//     for(int i=0;i<5;i++)
//     {
//         printf("%d index: ",i);
//         scanf("%d",(ptr+i));
//     }
//     // output
//     for(int i=0;i<5;i++)
//     {
//         printf("%d index = %d\n",i,*(ptr+i));
//     }
//     return 0;
// }
// Arrays as Function Arguments
// #include <stdio.h>
// void printNumbers(int arr[],int n);
// int main()
// {
//     int arr[]={12,13,54,34,35};
//     printNumbers(arr,5);
//     return 0;
// }
// void printNumbers(int arr[],int n)
// {
//     for(int i=0;i<n;i++)
//     {
//         printf("%d\t",arr[i]);
//     }
// }
// Multidimensional Arrays
// #include<stdio.h>
// int main()
// {
//     // 2 * 3
//     int marks[2][3];
//     marks[0][0]=90;
//     marks[0][1]=33;
//     marks[0][2]=45;

//     marks[1][0]=90;
//     marks[1][1]=33;
//     marks[1][2]=45;
//     printf("%d",marks[0][0]);
    
// take the n numbers of an elments in an arrays and display them
// #include <stdio.h>
// int main()
// {
//     int n;
//     printf("Enter the number: ");
//     scanf("%d",&n);
//     int arr[n];
//     printf("Enter the %d elements in an arryas:\n",n);
//     for(int i=0;i<n;i++)
//     {
//         printf("elements %d: ",i+1);
//         scanf("%d",&arr[i]);
//     }
//     printf("\n\n");
//     for(int i=0;i<n;i++)
//     {
//         printf("%d\n",arr[i]);
//     }
//     return 0;
// }
// 
// Function to count the number of odd numbers in an array
// #include <stdio.h>
// int is0dd(int arr[],int n);
// int main()
// {
//     int n;
//     printf("How many elements you want in an array:\n");
//     scanf("%d",&n);
//     int arr[n];
//     for(int i=0;i<n;i++)
//     {
//         printf("Elements %d\n",i+1);
//         scanf("%d",&arr[i]);
//     }
//     int odd = is0dd(arr,n);
//     printf("Total odd numbers are: %d",odd);

//     return 0;
// }
// int is0dd(int arr[],int n)
// {
//     int count=0;
//     for(int i=0;i<n;i++)
//     {
//         if(arr[i]%2 !=0)
//         {
//             count++;
//         }
//     }
//     return count;
// }
//verify the output
// #include <stdio.h>
// int main()
// {
//     int arr[]={34,55,34,34,33};
//     printf("%d\n",*(arr+2));
//     printf("%d",*(arr+5));
//     return 0;
// }
// write a function to reverse a number in arrat
// #include <stdio.h>
// int revers(int arr[],int n);
// void print_arr(int arr[],int n);
// int main()
// {
//     int arr[]={5,4,3,2,1};
//     revers(arr,5);
//     print_arr(arr,5);
//     return 0;

// }
// void print_arr(int arr[],int n)
// {
//     for(int i=0;i<n;i++)
//     {
//         printf("%d\t",arr[i]);
//     }
//     printf("\n");
// }
// int revers(int arr[],int n)
// {
//     for(int i=0;i<n/2;i++)
//     {
//         int first_val = arr[i];
//         int second_val=arr[n-i-1];
//         arr[i] = second_val;
//         arr[n-i-1] = first_val;
//     }
//     return 0;
// }
// Write a program to store the first n fibonacci numbers.
// #include <stdio.h>
// int main()
// {
//     int n;
//     printf("Enter n: ");
//     scanf("%d",&n);
//     int fib[n];
//     fib[0] = 0;
//     fib[1] = 1;
//     for(int i=2;i<n;i++)
//     {
//         fib[i] = fib[i-1] + fib[i-2]; // important
//         printf("%d \t",fib[i]);
//     }
//     return 0;
// }
// create a 2d array storing the tables of 2 & 3.
#include <stdio.h>
void store_table(int arr[][10],int n,int m,int number);
int main()
{
    int tables[2][10];
    store_table(tables,0,10,2);
    store_table(tables,1,10,3);
     for(int i=0;i<10;i++)
    {
       printf("%d\t",tables[0][i]);
    }
    printf("\n");
     for(int i=0;i<10;i++)
    {
       printf("%d\t",tables[1][i]);
    }


    return 0;
}
void store_table(int arr[][10],int n,int m,int number)
{
    for(int i=0;i<m;i++)
    {
        arr[n][i] = number * (i+1);
    }
}








































































































// Write a program in c to print the elements of an array in reverse order.
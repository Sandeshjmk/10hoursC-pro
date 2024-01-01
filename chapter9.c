// Structers
//a collection of values of different data types
/*Wap to read the student name,cgpa and rollno and display the 
output*/
// #include <stdio.h>
// struct student
// {
//     /* data */
//     int roll_no;
//     float cgpa;
//     char name[100];
// };
// int main()
// {
//     struct student s1;
//     printf("Enter the Student Name: ");
//     scanf("%s",s1.name);
//     printf("Enter the Student roll.no: ");
//     scanf("%d",&s1.roll_no);
//     printf("Enter the CGPA: ");
//     scanf("%f",&s1.cgpa);
//     printf("\n\n");
//     printf("Student name is: %s\n",s1.name);
//     printf("Student roll.no is: %d\n",s1.roll_no);
//     printf("Student CGPA is: %.2f\n",s1.cgpa);
    
    
// }
/*Structures in Memory*/
/*Write a program to store the data of 3 students*/
// #include <stdio.h>
// struct students
// {
//     /* data */
//     char name[100];
//     int roll;
//     float cgpa;
// };

// int main()
// {
//     struct students s2;
//     {
//         /* data */
//         for(int i=0;i<=2;i++)
//         {
//             printf("Enter the Student Name: ");
//             scanf("%s",s2.name);
//             printf("Enter the Student Roll: ");
//             scanf("%d",&s2.roll);
//             printf("Enter the Student cgpa: ");
//             scanf("%f",&s2.cgpa);
//             printf("\n");
//         }
    
//         printf("Student details:\n");
//         for(int i=0;i<=2;i++)
//         {
//             printf("Student Name: %s\n",s2.name);
//             printf("Student Roll: %d\n",s2.roll);
//             printf("Student Cgpa: %.2f\n",s2.cgpa);
//         }
//     };
//     return 0;
// }
/*Array of Structures*/
// #include <stdio.h>
// struct student
// {
//     /* data */
//     int roll;
//     float cgpa;
//     char name[100];
// };
// int main()
// {
//     struct student  ece[100];
//     ece[0].roll  = 123;
//     ece[0].cgpa = 3.22;
//     strcpy(ece[0].name,"Sandesh");
//     printf("Name = %s\n",ece[0].name);
//     printf("Roll = %d\n",ece[0].roll);
//     printf("CGPA = %.2f\n",ece[0].cgpa);
//     return 0;
    
// }
// initializing structures
// #include <stdio.h>
// struct student
// {
//     int roll;
//     float cgpa;
//     char name[100];
// };
// int main()
// {
//     struct student s1 = {1,3.44,"Sandesh"};
//     printf("Student roll no: %d",s1.roll);
//     return 0;
    
// }

// pointers to structures
// #include <stdio.h>
// struct student 
// {
//     /* data */
//     int roll;
//     float cgpa;
//     char name[100];
// };
// int main()
// {
//     struct student s1 = {1,3.44,"Sandesh"};

//     struct student *ptr = &s1;
//     printf("Student roll = %d\n",ptr->roll);
//     printf("Student cgpa = %.2f\n",ptr->cgpa);
//     printf("Student Name = %s\n",ptr->name);
    


//     return 0;

    
// }
// // passing strcuture to function
// #include <stdio.h>
// #include <string.h>
// struct student
// {
//     /* data */
//     int roll;
//     float cgpa;
//     char name[100];
// };
// void printinfo(struct student s1);
// int main()
// {
//      struct student s1 = {1,3.44,"Sandesh"};
//      printinfo(s1);
    
// }
// void printinfo(struct student s1)
// {
//     printf("Student roll = %d\n",s1.roll);
//     printf("Student cgpa = %.2f\n",s1.cgpa);
//     printf("Student Name = %s\n",s1.name); 

//     s1.roll = 1660;
// }
// typedef keyword
// #include <stdio.h>
// typedef struct student
// {
//     int roll;
//     char name[100];
//     float gpa;
// } coe;
// int main()
// {
//     coe s1;
//     s1.roll = 12;
//     s1.gpa = 3.44;
//     strcpy(s1.name,"Sandesh");
//     printf("Student name is: %s\n",s1.name);
//     return 0;
    
// }
// Enter address(house no, block, city, state) of 5 people.
// #include <stdio.h>
// typedef struct address
// {
//     /* data */
//     int house_no,block;
//     char city[100],state[100];
    
// }add;
// int main()
// {
//     add s1;
//     printf("Enter User Info: ");
//     printf("\n");
//     for(int i=0;i<=4;i++)
//     {
//         printf("Enter the [%d] user address info\n",i);
//         printf("Enter the house_No: ");
//         scanf("%d",&s1.house_no);
//         printf("Enter the block: ");
//         scanf("%d",&s1.block);
//         printf("Enter the city: ");
//         scanf("%s",s1.city);
//         printf("Enter the state: ");
//         scanf("%s",s1.state);
//         printf("\n2");
// }
//     printf("User info are: ");
//     printf("\n");
//     for(int i=0;i<=4;i++)
//     {
//         printf("[%d] user address info: ",i);
//         printf("House no: %d\n",s1.house_no);
//         printf("Block   : %d\n",s1.block);
//         printf("city    : %s\n",s1.city);
//         printf("state   : %s\n",s1.state);
//         printf("\n");
//     }
//     return 0;
// }
// create a strucutre to store vectors. Then make a function to return
//sum of 2 vectors
// #include <stdio.h>
// struct vector
// {
//     /* data */
//     int x;
//     int y;
// };
// void calSum(struct vector v1,  struct vector v2,struct vector sum );
// int main()
// {
//     struct vector v1 = {5,10};
//     struct vector v2 = {3,7};
//     struct vector sum = {0};
    
//     calSum(v1,v2,sum);
//     return 0;
    
// }
// void calSum(struct vector v1,  struct vector v2,struct vector sum )
// {
//     sum.x = v1.x + v2.x;
//     sum.y = v1.y + v2.y;
//     printf("Sum of x is: %d\n",sum.x);
//     printf("Sum of y is: %d",sum.y);
// }
// Create  a strucutre to store complex numbers.
//(use arrow operator)
// #include <stdio.h>
// struct complex
// {
//     int x;
//     int i;
// };
// int main()
// {
//     struct complex num1 = {5,8};
//     struct complex *ptr = &num1;
//     printf("imaginary part =%d\n",ptr->x);
//     printf("real part =%d\n",ptr->i);
//     return 0;
// }

// Make a structure to store Bank Account information of customer of ABC
// bank. Also, make a alias for it.
#include <stdio.h>
typedef struct bankinfo
{
    char name[100], address[100], father_name[100], mother_name[100];
    unsigned long int phNo, citizenship_number;
    int age;
} bk;
int main()
 {
    bk u1[1];

    printf("------------ABC BANK ACCOUNT----------\n");

    for (int i = 0; i < 2; i++) 
    {
        printf("%d customer info.\n", i + 1);
        printf("Enter Customer Name: ");
        fgets(u1[i].name, 100, stdin);
        printf("Enter the age: ");
        scanf("%d", &u1[i].age);
        printf("Enter Custome Address: ");
        fgets(u1[i].address, 100, stdin);
        printf("Enter the Father's Name: ");
        fgets(u1[i].father_name, 100, stdin);
        printf("Enter the mother's Name: ");
        fgets(u1[i].mother_name, 100, stdin);
        printf("Enter the phone number: ");
        scanf("%lu", &u1[i].phNo);
        getchar();
        printf("Enter the citizenship number: ");
        scanf("%lu", &u1[i].citizenship_number);
        getchar();
        printf("\n");
    }

    printf("Customer info :\n");

    for (int i = 0; i < 2   ; i++) 
    {
        printf("%d customer info.\n", i + 1);
        printf("Customer Name: %s\n", u1[i].name);
        printf("Customer age: %d\n", u1[i].age);
        printf("Customer Address: %s\n", u1[i].address);
        printf("Customer Father's name: %s\n", u1[i].father_name);
        printf("Customer Mother's name: %s\n", u1[i].mother_name);
        printf("Customer phone number: %lu\n", u1[i].phNo);
        printf("Customer Citizenship Number: %lu", u1[i].citizenship_number);
    }

    return 0;
}


// #include <stdio.h>
// int main()
// {
//     FILE *fptr;
//     fptr = fopen("test.txt","r");
//     // if(fptr!=NULL)
//     // {
//     //     printf("File Created.");
//     // }
//     // else
//     // {55x
//     //     printf("File not existed.");
//     // }
//     fclose(fptr);
//     return 0;
// }
// File Opening Modes or reading modese3
// #include <stdio.h>
// int main()
// {
//     FILE *fptr;
//     fptr = fopen("hello.txt","r");
//     if(fptr!=NULL)
//     {
//         printf("File existed.\n");
//     }
//     else
//     {
//         printf("File don't exist.\n");
//     }
//     fclose(fptr);
//     return 0;
// }
// Reading from a file
// #include <stdio.h>
// int main()
// {
//     FILE *fptr;
//     fptr = fopen("d:\\hello.txt","w");
//    fprintf(fptr,"%s","Sandesh");
//    fputs("Hello Worrld",fptr);
//     // if(fptr!=NULL)
//     // {
//     //     printf("File existed.\n");
//     // }
//     // else
//     // {
//     //     printf("File don't exist.\n");
//     // }
//     fclose(fptr);
//     return 0;
// }
// EOF(end of file)
// #include <stdio.h>
// int main()
// {
//     FILE *fptr;
//     fptr = fopen("d:\\hello.txt","r");
//     char ch;
//     ch = fgetc(fptr);
//     while(ch !=EOF )
//     {
//         printf("%c",ch);
//         ch = fgetc(fptr);
//     }
//     fclose(fptr);
//     return 0;
// }
// Make a program to read 5 integer from a file
// #include <stdio.h>
// int main()
// {
//     FILE *fptr;
//     fptr = fopen("d:\\hello.txt","r");
//     int num;
      
//     fscanf(fptr,"%d",&num);
//     printf("Number = %d\t",num);
//     fscanf(fptr,"%d",&num);
//     printf("Number = %d\t",num);
//     fscanf(fptr,"%d",&num);
//     printf("Number = %d\t",num);
//     fscanf(fptr,"%d",&num);
//     printf("Number = %d\t",num);
//     fscanf(fptr,"%d",&num);
//     printf("Number = %d\t",num);
//     fclose(fptr);
//     return 0;
// }
// Make a program to input student information from a user & enter it 
//to a file
// #include <stdio.h>
// int main()
// {
//     FILE *fptr;
//     fptr = fopen("d:\\system.txt","a");
//     char name[100];
//     int age;
//     float cgpa;
//     printf("Enter the Student info:\n");
//         printf("Enter Name: ");
//         fgets(name,100,stdin);
//         printf("Enter age: ");
//         scanf("%d",&age);
//         getchar();
//         printf("Enter Cgpa: ");
//         scanf("%f",&cgpa);
//         getchar();
//        fprintf(fptr,"student name:%s\nstudent age:%d\nstudent cgpa:%.2f",name,age,cgpa);
//     fclose(fptr);

//     return 0;
    
// }
// Write a program to write all the odd numbers from 1 to n in a file.
// #include <stdio.h>
// int main()
// {
//     FILE *fptr;
//     fptr = fopen("d:\\odd.txt","a");
//     if(fptr == NULL)
//     {
//         printf("File does not exists.");
//     }
//     else
//     {
//         printf("File created succesfully.\n");
//         int num;
//         printf("Enter the number: ");
//         scanf("%d",&num);
//         for(int i=1;i<=num;i++)
//         {
//             if(i % 2 != 0)
//             {
//                 fprintf(fptr,"%d\n",i);
//             }
//         }
//         fclose(fptr);
//         return 0;

//     }
// }

// 2 numbers - a & b are written in a file. Write a program to replace
// with their sum
#include <stdio.h>
int main()
{
    FILE *fptr;
    fptr = fopen("d:\\sum.txt","r");
    int a;
    fscanf(fptr,"%d",&a);
    int b ;
    fscanf(fptr,"%d",&b);
    fclose(fptr);
    fptr = fopen("d:\\sum.txt","w");
    fprintf(fptr,"sum = %d",a+b);
    fclose(fptr);
    return 0;
}
// a) Write a program to read a string from a file & output to the user
// b) Replace the data in file of Q(a) with the number of vowels in the string
// c) Format the information of 5 students(name,marks,cgpa,course) in a table like
// structure in a file.
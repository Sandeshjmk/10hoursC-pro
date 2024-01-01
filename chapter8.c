/*Strings and Structrues*/
// Strings
// #include <stdio.h>
// void print_string(char arr[]);
// int main()
// {
//     char first_name[] ={'S','A','N','D','E','S','H','\0'};
//     char last_name[]={'J','A','M','K','A','T','E','L','\0'};
//     print_string(first_name);
//     print_string(last_name);
//     return 0;
// }
// void print_string(char arr[])
// {
//     for(int i=0;arr[i]!='\0';i++)
//     {
//         printf("%c",arr[i]);
//     }
//     printf("\n");
// }
//String format specifier
// #include <stdio.h>
// int main()
// {
//     char name[50];
//     scanf("%s",name);
//     printf("Your name is:%s",name);
//     return 0;
// }
/*Ask the user to enter their full name & print it back to them*/
// #include <stdio.h>
// int main()
// {
//     char name[50];
//     printf("Enter your name: ");
//     fgets(name,50,stdin);
//     puts(name);
//     return 0;
// }
/*String using pointers*/
// #include <stdio.h>
// int main()
// {
//     char *canChange = "Hello World";
//     puts(canChange);
//     canChange = "World";
//     puts(canChange);
//     // char canChange[] = "Hello World";
//     // puts(canChange);
//     // canChange = "World";
//     // puts(canChange);
    
// }
/* Make a program that inputs user's name & prints its length*/
// #include <stdio.h>
// int count_len(char arr[]);
// int main()
// {
//     char name[100];
//     fgets(name,50,stdin);
//     printf("Length is: %d",count_len(name));
    
// }
// int count_len(char arr[])
// {
//     int count =0;
//     for(int i=0;arr[i]!='\0';i++)
//     {
//         count++;
//     }
//     return count-1;
// }
// Standard Library functions
// #include <stdio.h>
// #include <string.h>
// int main()
// {
//     char name[100] = "Sandesh Jamkatel";
//     int lenght = strlen(name);
//     printf("Total lenght is: %d",lenght);
//     return 0;
// }
// strcpy
// #include <stdio.h>
// int main()
// {
//     char oldString[] = "Cricket";
//     char newString[] = "RCB";
//     strcpy(newString,oldString);
//     puts(newString);
//     return 0;
// }
// strcat
// #include <stdio.h>
// int main()
// {
//     char first_val[100] = "Sandesh love ";
//     char second_val[] = "Cricket";
//     strcat(first_val,second_val);
//     puts(first_val);
//     return 0;
// }
// strcmp
// #include <stdio.h>
// int main()
// {
//     char first[] = "Sandy";
//     char second[] = "Sandesh";
//     printf("%d",strcmp(second,first));
    
//     return 0;
// }
// Take a string input from the user using %c.
// #include <stdio.h>
// int main()
// {
//     char str[100];
//     char ch;
//     int i=0;
//     while(ch != '\n')
//     {
//         scanf("%c",&ch);
//         str[i] = ch;
//         i++;
//     }
//     str[i] = '\0';
//     puts(str);
//     return 0;

// }
/*Find the salted form of a password entered by user if the salt is
"123" & added at the end*/
// #include <stdio.h>
// int main()
// {
//     char ch[100];
//     printf("Enter your password: ");
//     scanf("%s",ch);
//     char str[10] = "123";
//     strcmp(ch,str);
//     strcat(str,ch);
//     puts(str);
//     return 0;
// }
/* Write a funtion named slice, which takes a string & returns
a sliced string from index n to m.*/
#include <stdio.h>\
void slice(char str[],int n, int m);
int main()
{
    
    return 0;
}
void slice(char str[],int n,int m)
{
    char newstr[100]; 
    for(int i=n;j=0;i<=m;i++;j++)
    {
        newstr[j] = str[j];
    }
}
// Write a function to count the occurrene of vowels in a string.
// check if a given character is present in a string or not.


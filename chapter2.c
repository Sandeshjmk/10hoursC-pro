// Instruction 
#include <stdio.h>
int main()
{
// Valid Statament
    int a = 22;
    int b= a;
    int c = b+1;
//  Invalid Statement
    int oldAge =22;
    int newAge = oldAge + years;
    int years = 2;

// Arithemetic instructions
    // valid statement
    // a = b+c;
    // a = b*c;
    // a = b/c;
    // b= c+1;
    // int a = 5^2;
    // printf("%d",a);
// Modular Operator
   //printf("%d",-22%3);
    
// Type conversion
    int a = 1.999999;
    printf("%d\n",a);
    return 0;
}
// Question related to operator precedencer
#include <stdio.h>
int main()
 {
    int a = 4*3/6*2;
    int b = 5*2/2*3;
    int c= 5*(2/2)*3;
    int d= 5+2/2*3;
    printf("%d\n",a);
    printf("%d\n",b);
    printf("%d\n",c);
    printf("%d\n",d);
    printf("%d",3>=3); // reltional operator
    return 0;
}
// problem related to operators
// Write a program to check if a number is divisible by 2 or not.
#include <stdio.h>
int main()
{
    int x;
    printf("Enter a number: ");
    scanf("%d",&x);
    printf("%d",x%2==0);
    return 0;
    printf("%d",8^7);

    int num ;
    printf("Enter a number: ");
    scanf("%d",&num);
    printf("%d\n",num>9 && num<100);
    return 0;
}
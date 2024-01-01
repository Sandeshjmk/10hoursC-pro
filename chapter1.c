// // Variables in C programming
#include <stdio.h>
int main()
{
    int num=25;
    num=36;
    char star='*';
    int age=22;
    age=33;
    float pi = 3.14;
    printf("%d\n",num);
    printf("%c\n",star);
    printf("%d\n",age);
    printf("%f\n",pi);

    return 0;
}
// Data types in C
#include <stdio.h>
int main()
{
    int num=44;
    float pi = 3.14;
    char hashtag = '#';
    printf("%d\n",sizeof(num));
    printf("%d\n",sizeof(pi));
    printf("%d\n",sizeof(hashtag));
    return 0;
}
// input and output in c
#include <stdio.h>
int main()
{
    int age;
    printf("Enter you Age:"); // Age is string
    scanf("%d",&age);
    printf("Your age is: %d",age);
}
// // Write a program to calculate area of a square
#include <stdio.h>
int main()
{
    int side,area;
    printf("Enter the side of Square: ");
    scanf("%d",&side);

    area  = side * side;

    printf("Area of sqaure is:%d",area);
    return 0;

}
 //write a program to calculate area of a circle.
#include <stdio.h>
#define PI 3.1415
int main()
{
    float radius,area;
    printf("Enter the radius: ");
    scanf("%f",&radius);

    area = PI * radius*radius;
    printf("Area of circle is: %.2f",area);
    
}
// Write a program to calculate permeter of rectangle take sides of a & b from the user.
#include <stdio.h>
int main()
{
    float perimeter,a,b;
    printf("Enter the length: ");
    scanf("%f",&a);
    printf("Enter the breadth: ");
    scanf("%f",&b);
    perimeter = 2*(a+b);
    printf("Perimeter of rectangle is: %.2f",perimeter);
    return 0;
}
// // Take a number(n) from the user & output its cube (n*n*n).
#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    int cube = n*n*n;
    printf("Cube of given number is: %d",cube);
}

// Dynamic memory location
// it is  a way to allocate memory to a data structure during the runtime.
// malloc() - memory allocation
// #include <stdio.h>
// #include <stdlib.h>
// int main()
// {
//     int *ptr;
//     ptr = (int *)malloc(5*sizeof(int));
//     ptr[0] = 13;
//     ptr[1] = 33;
//     ptr[2]=34;
//     ptr[3]=4;
//     ptr[4] = 3;
//     for(int i=0;i<=4;i++)
//     {
//         printf("%d\n",ptr[i]);
//     }
//     // printf("%d\n",sizeof(int));
//     // printf("%d\n",sizeof(float));
//     // printf("%d\n",sizeof(char));

//     return 0;

// }
// WAP to allocate memory to store 5 prices
// #include <stdio.h>
// #include <stdlib.h>
// int main()
// {
//     float *price;
//     price = (float *)malloc(5*sizeof(float));
//     price[0]= 12.33;
//     price[1] = 32.44;
//     price[2] = 34.55;
//     price[3] = 44.55;
//     price[4] = 2.43;
//     printf("Price of Commodity is:\n");
//     for(int i=0;i<=4;i++)
//     {
//         printf("%f\n",price[i]);
//     }
//     return 0;

// }
/*Calloc function*/
// #include <stdio.h>
// #include <stdlib.h>
// int main()
// {
//     float *fptr;
//     fptr = (float *) calloc(5,sizeof(float));
//     for(int i=0;i<5;i++)
//     {
//         printf("%f\n",fptr[i]);

//     }
//     return 0;
// }
// WAP to allocate memory of size n, where n is entered 
// by the user
// #include <stdio.h>
// #include <stdlib.h>
// int main()
// {
//     int *ptr;
//     int n;
//     printf("Enter n: ");
//     scanf("%d",&n);
//     ptr = (int *)calloc(n,sizeof(int));
//     for(int i=0;i<n;i++)
//     {
//         printf("%d\n",ptr[i]);
//     }
//     return 0;
// }
// Free (ptr)
// #include <stdio.h>
// #include <stdlib.h>
// int main()
// {
//         int *ptr;
//     int n;
//     printf("Enter n: ");
//     scanf("%d",&n);
//     ptr = (int *)calloc(n,sizeof(int));
//     for(int i=0;i<n;i++)
//     {
//         printf("%d\n",ptr[i]);
//     }
//     free(ptr);
//     ptr = (int *)calloc(2,sizeof(int));
//      for(int i=0;i<n;i++)
//     {
//         printf("%d\n",ptr[i]);
//     }


// }
// realloc()
// Allocate memory for 5 numbers. Then dynamically increase
// it to 8 numbers.
// #include <stdio.h>
// #include <stdlib.h>
// int main()
// {
//     int *ptr;
//     ptr = (int *) calloc(5,sizeof(int));
//     printf("Enter numbers(5):\n");
//     for(int i=0;i<=4;i++)
//     {
//         scanf("%d",&ptr[i]);
//     }
//     ptr = realloc(ptr,8);
//      printf("Enter numbers(8):\n");
//      for(int i=0;i<=7;i++)
//     {
//         scanf("%d",&ptr[i]);
//     }
//     for(int i=0;i<=7;i++)
//     {
//         printf("Number %d is %d\n",i,ptr[i]);
//     }

//     return 0;
// }
/*Create an array of size5 (using calloc) & enter its 
values from the user*/
// #include <stdio.h>
// #include <stdlib.h>
// int main()
// {
//      int *ptr;
//     ptr = (int *) calloc(5,sizeof(int));
//     printf("Enter numbers(5):\n");
//     for(int i=0;i<=4;i++)
//     {
//         scanf("%d",&ptr[i]);
//     }
//     for(int i=0;i<=4;i++)
//     {
//         printf("Number %d is %d\n",i,ptr[i]);
//     }

//     return 0;
// }
/*Allocate memory to store first 5 odd numbers, 
then reallocate it to store first 6 even number.*/
// #include <stdio.h>
// #include <stdlib.h>
// int main()
// {
//     int *ptr;
//     ptr = (int *)calloc(10,sizeof(int));
//     printf("First 5 odd numbers are:\n");
//     for(int i=1;i<=10;i++)
//     {
//          if( i% 2 != 0)
//          {
//             printf("%d\n",i);
//          }
//     }
//     ptr = realloc(ptr,12);
//     printf("first 6 Even number are:\n");
//     for(int i=1;i<=12;i++)
//     {
//          if( i% 2 == 0)
//          {
//             printf("%d\n",i);
//          }
//     }
//     return 0;

// }
#include <stdio.h>
int main()
{
    FILE *fptr;
    fptr = fopen("d:\\student.csv","w");
    if(fptr != NULL)
    {
        printf("File created.\n");
        fprintf(fptr,"%s","First name\n");
        fprintf(fptr,"%s","Sandesh\nAdbevillers\nVirat\n");
        fprintf(fptr,"s")

    } 
    fclose(fptr);
    return 0;
}

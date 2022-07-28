#include <stdio.h>
#include <stdlib.h>

#define MIN(a,b)  ((a)<(b))?(a):(b)

int main()
{
    int a=5, b=8, min;
    min =  MIN(a,b);
    printf("min is %d \n", min);
    int *p = &a;
    min = MIN(*p,b);
    #ifndef HEADER
        printf("not defined\n");
    #else
        printf("defined\n");
    #endif
    printf("min is %d\n",min);
    for (int i =0; i<10; i++)
    {
        if(i % 2 == 0)
        {
            printf("%d \n", i);
        }
    }
    printf("end of leet_code\n");
    return 0;
}
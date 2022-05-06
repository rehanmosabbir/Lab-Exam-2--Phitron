#include<stdio.h>


int main()
{
    int X;
    scanf("%d", &X);

    if(X >= 0 && X < 40)
    {
        printf("%d\n", 40 - X);
    }else if(X >= 40 && X < 70)
    {
        printf("%d\n", 70 - X);
    }else if(X >= 70 && X < 90)
    {
        printf("%d\n", 90 - X);
    } else if(X >= 90 && X <= 100)
    {
        printf("expert\n");
    }

    return 0;
}




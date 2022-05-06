#include<stdio.h>

int main()
{
    int A,B,C,D,E,F,X,T_advances,A_advances,count = 0;
    scanf("%d %d %d %d %d %d %d", &A,&B,&C,&D,&E,&F, &X);

    int T_passed_time = (A + C);
    if(A >= X)
    {
        T_advances = X * B;
    }
    else if(T_passed_time < X)
    {
        int count = X / T_passed_time;
        int rest = X % T_passed_time;
        if(rest > A)
        {
            count++;
            T_advances = (A * count) * B;
        } else
        {
            T_advances = ((A * count) + rest) * B;
        }


    } else if(T_passed_time >= X)
    {
        T_advances = A * B;
    }

    int A_passed_time = (D + F);
    if(D >= X)
    {
        A_advances = X * E;
    }
    else if(A_passed_time < X)
    {
        int count = X / A_passed_time;
        int rest = X % A_passed_time;
        if(rest > D)
        {
            count++;
            A_advances = (D* count) * E;
        } else
        {
            A_advances = ((D * count) + rest) * E;
        }
    } else if(A_passed_time >= X)
    {
        A_advances = D* E;
    }

    if(T_advances > A_advances)
    {
        printf("Takahashi\n");
    } else if(T_advances < A_advances)
    {
        printf("Aoki\n");
    } else
    {
        printf("Draw\n");
    }
    return 0;
}

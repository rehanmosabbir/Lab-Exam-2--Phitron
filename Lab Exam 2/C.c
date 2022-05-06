#include<stdio.h>
#include<stdbool.h>

int main()
{

    int S, T, X;
    bool is_away = false;
    scanf("%d %d %d", &S, &T, &X);

    if(S < T)
    {
        for(int i = S; i <= T; i++)
        {
            if(i == X)
            {
                is_away = true;
                break;
            }
        }
        if(is_away)
        {
            printf("Yes\n");
        }
        else
        {
            printf("No\n");
        }

    } else if(S > T)
    {
        if(T != X)
        {
             for(int i = S,j = 1;j <= ((24 - S) + 1) + T  ; i++,j++)
            {
                if(i %24 == X )
                {
                is_away = true;
                break;
                }
            }
        } else
        {
            for(int i = S,j = 1;j <= ((24 - S) + 1) + T  ; i++,j++)
            {
                if(((i %24) * 60) < ((X * 60) + 30) )
                {
                is_away = false;
                break;
                }
            }
        }

        if(is_away)
        {
            printf("Yes\n");
        }
        else
        {
            printf("No\n");
        }
    }
    return 0;
}

#include<stdio.h>

int main()
{
    int N,K,A, last = 0;
    scanf("%d %d %d",&N, &K, &A);

    for(int i = A, j = 1; j <= K; i++,j++)
    {
            if(i <= N)
            {
                last = i;
            }
            if(i > N)
            {
                if(i % N == 0)
                {
                    last = N;
                }
                else
                {
                    last = i % N;
                }
            }
    }
    printf("%d\n", last);

    return 0;
}

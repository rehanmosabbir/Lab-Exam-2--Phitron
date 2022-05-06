#include<stdio.h>

int main()
{
    int row,column;
    scanf("%d %d", &row, &column);

    for (int i = 1; i <= row;i++)
    {
        for(int j = 1; j <= column; j++)
        {
            if(i%4==0)
            {
                if(j == 1)
                {
                    printf("#");
                }
                else
                {
                    printf(".");
                }
            }
            else if(i % 2 != 0)
            {
                printf("#");
            }
            else
            {
                if(j!= column)
                {
                    printf(".");
                }
                else
                {
                    printf("#");
                }
            }
        }
        printf("\n");
    }
    return 0;
}

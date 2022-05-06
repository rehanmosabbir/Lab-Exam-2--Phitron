#include<stdio.h>

int main()
{
    int n,danik_count = 0,anton_count = 0;
    char ch;
    scanf("%d", &n);
    for(int i = 1; i <= n; i++)
    {
        scanf(" %c", &ch);
        if(ch == 'A')
        {
            anton_count++;
        } else
        {
            danik_count++;
        }
    }
    if(anton_count > danik_count)
    {
        printf("Anton\n");
    } else if (anton_count < danik_count)
    {
        printf("Danik\n");
    } else
    {
        printf("Friendship\n");
    }
    return 0;
}




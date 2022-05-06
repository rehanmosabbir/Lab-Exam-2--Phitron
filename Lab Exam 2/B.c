#include<stdio.h>


int main()
{
    int no_of_rooms,p,q,count = 0;
    scanf("%d", &no_of_rooms);

    for(int i = 1; i <= no_of_rooms; i++)
    {
        scanf("%d %d",&p,&q);
        if(q - p >= 2)
        {
            count++;
        }
    }
    printf("%d\n", count);
    return 0;
}




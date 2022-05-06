#include<stdio.h>

int main()
{
    int abc,sum,a,b,c;
    scanf("%d",&abc);
    c = abc % 10;
    b = (abc / 10) % 10;
    a = (abc / 10) / 10;

    sum = abc + (b * 100 + c * 10 + a * 1) + (c * 100 + a * 10 + b * 1);
    printf("%d\n",sum);
    return 0;
}




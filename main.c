#include<stdio.h>

int main()
{
    int i;
    int count = 0, sum = 0;

    for(i = 1; i <= 100; i++)
    {
        if(i == 90)
        {
            break;
        }

        if(i % 8 == 0)
        {
            continue;
        }

        if(i % 4 == 0)
        {
            sum = sum + i;
            count++;
        }
    }

    printf("Total sum = %d\n", sum);
    printf("Total count = %d\n", count);

    return 0;
}

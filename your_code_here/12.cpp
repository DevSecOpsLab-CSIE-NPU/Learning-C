#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define bool_Bool
#define true 1
#define false 0

int main(int argc, char *argv[])
{
    srand(time(0));
    bool random;
    int count = 0, heads = 0, tails = 0, i;

    printf("How many times would you like to flip the coin?");
    scanf("%d", &count);

    for (i = 0; i < count; i++)
    {
        random = rand() % 2;
        if (random)
        {
            heads++;
        }
        else
        {
            tails++;
        }
    }
    printf("After flipping the coin %d times, the results were\n%d heads\n%d tails", count, heads, tails);
    return 0;
}
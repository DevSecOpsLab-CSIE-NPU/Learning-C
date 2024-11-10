#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    char yn = 'Y';
    float total = 0, i = 0;
    float avg = 0;

    while (yn != 'N')
    {
        int score;
        if (yn == 'Y')
        {
            printf("Enter a test score: ");
            scanf("%d", &score);
            total += score;
            i++;
        }

        printf("Would you like to continue? Y/N ");
        scanf("%c", &yn);
    }

    avg = total / i;
    printf("%.2f is the average.", avg);

    return 0;
}
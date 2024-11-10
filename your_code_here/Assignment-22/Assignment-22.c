#include <stdio.h>
#include <stdlib.h>

typedef struct STATS
{
    int points;
    int games;
} STATS;

int main(int argc, char *argv[])
{
    STATS player[5] = {0};
    int player_size = 5;
    int i;
    for (i = 0; i < player_size; i++)
    {
        printf("Enter Player %d's point total: ", i + 1);
        scanf("%d", &player[i].points);
        printf("Enter Player %d's games played: ", i + 1); 
        scanf("%d", &player[i].games);
    }

    for (i = 0; i < player_size; i++)
    {
        printf("Player %d's scoring average was %.2f ppg.\n", i + 1, (float)player[i].points / player[i].games);
    }

    return 0;
}
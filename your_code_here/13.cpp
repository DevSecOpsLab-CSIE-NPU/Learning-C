#include <stdio.h>
#include <stdlib.h>

#define games 4

int main(int argc, char *argv[])
{
    float Player[5] = {0};
    int Player_size = 5;
    float avg = 0;
    int best_player = -1;
    int i, j;

    for (i = 1; i <= games; i++)
    {
        printf("Game %d\n", i);
        for (j = 1; j < Player_size; j++)
        {
            int score;
            printf("Enter scoring total for Player #%d: ", j);
            scanf("%d", &score);
            Player[j - 1] += score;
        }
    }
    for (i = 0; i < Player_size; i++)
    {
        if (Player[i] > avg)
        {
            avg = Player[i];
            best_player = i + 1;
        }
    }
    avg /= games;
    printf("Player #%d had the highest scoring average at %.2f points per game.\n", best_player, avg);
    return 0;
}
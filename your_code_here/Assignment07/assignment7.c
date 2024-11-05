#include <stdio.h>
#include <math.h>

int main(void)
{
    double a, b, c, x;
    printf("Enter the value of variable \'A\': ");
    scanf("%lf", &a);
    printf("Enter the value of variable \'B\': ");
    scanf("%lf", &b);
    printf("Enter the value of variable \'C\': ");
    scanf("%lf", &c);

    double solution1, solution2;
    solution1 = (-b + sqrt((b * b) - (4 * a * c))) / (2 * a);
    solution2 = (-b - sqrt((b * b) - (4 * a * c))) / (2 * a);

    if (((a * (solution1 * solution1)) + (b * solution1) + c) == 0)
    {
        printf("The solution using the '+' operator is: %lf\n", solution1);
    }
    else
    {
        printf("The solution using the '+' operator is: %lf, but you might want to double-check that...\n", solution1);
    }

    if (((a * (solution2 * solution2)) + (b * solution2) + c) == 0)
    {
        printf("The solution using the '-' operator is: %lf", solution2);
    }
    else
    {
        printf("The solution using the '-' operator is %lf, but you might want to double check that...\n", solution2);
    }

    return 0;
}
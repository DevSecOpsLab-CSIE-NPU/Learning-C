#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[])
{
    float a, b, c, x1, x2;
    printf("Enter the value of variable 'A': ");
    scanf("%f", &a);
    printf("Enter the value of variable 'B': ");
    scanf("%f", &b);
    printf("Enter the value of variable 'C': ");
    scanf("%f", &c);

    x1 = (-b + sqrt(pow(b, 2) - 4 * a * c)) / (2 * a);
    x2 = (-b - sqrt(pow(b, 2) - 4 * a * c)) / (2 * a);
    
    printf("The solution using the '+' operator is: %f\n", x1);
    printf("The solution using the '-' operator is: %f, but you might want to double-check that...\n", x2);

    return 0;
}
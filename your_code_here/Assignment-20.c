#include <stdio.h>
#include <stdlib.h>

struct struct_name
{
    int integer;
    char charcter;
    float floatie;
} example;

int main(void)
{
    example.integer = 50;
    example.charcter = 'W';
    example.floatie = 3.14;

    printf("This is the int: %d", example.integer);
    printf(", this is the char: %c", example.charcter);
    printf(", this is the float: %.2f\n", example.floatie);

    return 0;
}

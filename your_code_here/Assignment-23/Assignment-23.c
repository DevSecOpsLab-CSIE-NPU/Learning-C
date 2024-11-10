#include <stdio.h>
#include <stdlib.h>

typedef struct SIMPLE
{
    int integer;
} SIMPLE;

int main(int argc, char *argv[])
{
    SIMPLE *ptr;
    SIMPLE test;

    ptr = &test;

    test.integer = 5;
    printf("%d\n", test.integer);

    (*ptr).integer = 6;
    printf("%d\n", test.integer);

    ptr->integer = 7;
    printf("%d\n", test.integer);

    return 0;
}
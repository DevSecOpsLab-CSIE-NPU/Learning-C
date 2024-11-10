#include <stdio.h>
#include <stdlib.h>

typedef struct STRUCT
{
    int i;
    char c;
    float f;
}STRUCT;

int main(int argc, char *argv[])
{
    STRUCT s = {50, 'w', 3.14};


    printf("This is the int: %d", s.i);
	printf(", this is the char: %c", s.c);
	printf(", this is the float: %.2f\n", s.f);
    return 0;
}
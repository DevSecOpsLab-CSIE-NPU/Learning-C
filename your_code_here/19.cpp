#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char *ptr;

    ptr = (char *)malloc(10 * sizeof(char));

    if (ptr == NULL)
    {
        printf("Memory could not be allocated.\n");
        return 1;
    }
    else
    {
        printf("Memory was successfully allocated.\n");

        free(ptr);
        return 0;
    }
}
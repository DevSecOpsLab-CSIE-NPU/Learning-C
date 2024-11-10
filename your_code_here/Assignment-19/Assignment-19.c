#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    char *ptr = malloc(10 * sizeof(char));
    
    if (ptr == NULL)
    {
        printf("Memory could not be allocated.");
		return 1;
    }

    printf("Memory was successfully allocated.");
    free(ptr);

    return 0;
}
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    char* first;
    char* last;

    printf("Enter your first name: ");
    scanf("%s", &first);
    printf("Enter your last name: ");
    scanf("%s", &last);

    printf("Hello %s %s!\n", &first, &last);
    return 0;
}
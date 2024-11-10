#include <stdio.h>
#include <stdlib.h>

typedef struct DATA
{
    char *last;
    char *first;
    int id;
    int ssn;
    char *title;
} DATA;

typedef struct EMPLOYEES
{
    DATA d1, d2;
} EMPLOYEES;

int main(int argc, char *argv[])
{
    EMPLOYEES e1 = {
        {"Roy", "Higgins", 345, 9832, "Senior"},
        {"Amanda", "Nunes", 678, 4521, "Junior"}};

    printf("Employee information for Roy Higgins: \nID: %d\nSSN: %d\nTitle: %s Engineer\n\n", e1.d1.id, e1.d1.ssn, e1.d1.title);
    printf("Employee information for Amanda Nunes: \nID: %d\nSSN: %d\nTitle: %s Engineer\n", e1.d2.id, e1.d2.ssn, e1.d2.title);

    return 0;
}
#include <stdio.h>
#include <stdlib.h>

#define D(X) d##x

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
    EMPLOYEES e1;
    printf("Enter the employee's first name: ");
    scanf("%s", &e1.d1.first);
    printf("Enter the employee's last name: ");
    scanf("%s", &e1.d1.last);
    printf("Enter the employee's ID number: ");
    scanf("%d", &e1.d1.id);
    printf("Enter the last four digits of the employee's SSN: ");
    scanf("%d", &e1.d1.ssn);
    printf("Enter the employee's title (do not include the word 'Engineer'): ");
    scanf("%s", &e1.d1.title);

    printf("Enter the employee's first name: ");
    scanf("%s", &e1.d2.first);
    printf("Enter the employee's last name: ");
    scanf("%s", &e1.d2.last);
    printf("Enter the employee's ID number: ");
    scanf("%d", &e1.d2.id);
    printf("Enter the last four digits of the employee's SSN: ");
    scanf("%d", &e1.d2.ssn);
    printf("Enter the employee's title (do not include the word 'Engineer'): ");
    scanf("%s", &e1.d2.title);

    printf("Employee information for %s %s: \nID: %d\nSSN: %d\nTitle: %s\n\n", &e1.d1.first, &e1.d1.last, e1.d1.id, e1.d1.ssn, &e1.d1.title);
    printf("Employee information for %s %s: \nID: %d\nSSN: %d\nTitle: %s\n", &e1.d2.first, &e1.d2.last, e1.d2.id, e1.d2.ssn, &e1.d2.title);

    return 0;
}
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
    int timer, hours, minutes, seconds;
    
    printf("Enter the amount of seconds: ");
    scanf("%d", &timer);

    hours = timer / 3600;
    minutes = (timer % 3600) / 60;
    seconds = (timer % 3600) % 60;

    printf("%d seconds is equal to %d hours, %d minutes, and %d seconds.", timer, hours, minutes, seconds);
    return 0;
}
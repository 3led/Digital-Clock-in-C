#include <stdio.h>
#include <stdlib.h>

int main(void) {

    int years;
    int days;
    int hours;
    int minutes;
    int seconds;
    int d = 1000; // this will be used in the Sleep function, 1000 milliseconds

    printf("(Write each answer as a natural number (or zero) and press enter)\n\n");
    printf("What year is it? \n");
    scanf("%d", &years);

    printf("What day is it? \n");
    scanf("%d", &days);

    printf("Set the current hour: \n");
    scanf("%d", &hours);

    printf("Set the current minutes: \n");
    scanf("%d", &minutes);

    printf("Set the current seconds: \n");
    scanf("%d", &seconds);


    if (years < 0 || days < 0 || hours < 0 || minutes < 0 || seconds < 0 ||
        hours > 23 || minutes > 59 || seconds > 59){
            printf("Error! \n Make sure that each value you passed is natural");
            printf("and that second/minutes <= 59 & hours <= 23!!!");
        exit (0);
    }

    while(1) {
        seconds++;
        if (seconds > 59) {
            minutes++;
            seconds = 0;
        }
        if (minutes > 59) {
            hours++;
            minutes = 0;
        }
        if (hours > 23) {
            days++;
            hours = 0;
        }
        if (days > 365) {
            years++;
            days = 1;
        }


        printf("\t\t\t\t~~~~~Year %d", years);
        printf(", Day %d~~~~~", days);
        printf("\n\t\t\t\tClock :");
        printf("\n\t\t\t\tHours:\tMinutes:   Seconds:");
        printf("\n\t\t\t\t%02d\t%02d\t   %02d", hours, minutes, seconds);

        Sleep(d); // Sleep(1000), waits 1 millisecond
        system("cls");
    }

    return (0);
}

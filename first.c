#include <stdio.h>
#include <windows.h>

int main(){
    int hour , minute , second; // Initialising clock variables
    int delay = 1000; // Setting clock delay to 1000 milliseconds for using sleep

    printf("Set time: ");
    scanf("%d%d%d", &hour, &minute, &second);
    
    if(hour > 24 || minute > 59 || second > 59){
        printf("You cannot put this time value.\n");
        exit(0); //Terminating the function because of error in setting time.`
    }

    while(1){
        second++;
        if(second > 59){
            second = 0;
            minute++;
        }
        if(minute > 59){
            minute = 0;
            hour++;
        }
        if(hour > 23){
            hour = 0;
        }
        printf("\nClock: ");
        printf("%02d:%02d:%02d", hour, minute, second); //By using %02d it ensures the value has two digits always.
        Sleep(delay);
        system("cls"); // This will clear the screen again and again
    }

}
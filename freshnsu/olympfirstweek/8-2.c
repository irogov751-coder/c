#include <stdio.h>

int main(){
    int hour;
    int min;
    int sec;
    int vsec;
    scanf("%d %d %d %d", &hour, &min, &sec, &vsec);
    int total_time = hour*3600+min*60+sec;
    total%=84600;
    hour = total_time/3600;
    min = (total_time%3600)/60;
    sec = (total_time%3600)/3600;
    printf("%d %d %d", hour, min, sec);

    return 0;
}
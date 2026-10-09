#include <stdio.h>



int main(){
    int hour;
    int min;
    int sec;
    int vsec;
    scanf("%d %d %d %d", &hour, &min, &sec, &vsec);
    if(hour<0||hour>23||min<0||min>59||sec<0||sec>59||vsec<1||vsec>1000000){
        return 0;
    }
    if(vsec+sec>=60){
        int f1 = vsec+sec;
        min+=f1/60;
        sec = f1%60;
    }
    else{
        sec+=vsec;
    }
    if(min>=60){
        hour+=min/60;
        min = min%60;
    }
    if(hour>=24){
        hour=hour%24;
    }
    printf("%d %d %d", hour, min, sec);
    return 0;
}
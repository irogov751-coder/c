#include <stdio.h>
#include <stdlib.h>
typedef struct point{
    char a;
    int y;
} point;


int main(){
    point* p1 = malloc(sizeof(point));
    p1->a = 'a';
    p1->y = 100;
    printf("%c %d", (*p1).a, (*p1).y);

    return 0;
}
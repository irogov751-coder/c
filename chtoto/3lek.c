#include <stdio.h>
#include <ctype.h>

typedef struct {//обьявление структуры и присвоение через typedef имени
    int x, y;
    struct point_t* p;
} point_t;

//(*p).x
//p->x 

void read_point(point_t* point){
    scanf("%d%d", &(*point).x, &(*point).y);
}

void print_point(point_t* point){
    print("%d%d\n", point->x, point->y);
}


int main(){
    point_t points[10];
    for(int i =0; i<10;++i){
        read_point(points+i);
    }
    for(int i =0; i<10;++i){
        print_point(points+i);
    }
    return 0;
}
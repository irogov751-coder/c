#include <stdio.h>


int main(){
    int x, y, z;
    int s = 0;
    scanf("%d %d %d", &x, &y, &z);
    if(x>0 && y>0 && z>0){
        s = 2*(x*y+y*z+z*x);
        printf("%d", s);
    }
    else if(x<=0){
        printf("-1");
    }
    else if(y<=0){
        printf("-2");
    }
    else if(z<=0){
        printf("-3");
    }
    else{
        printf("-1");
    }
    return 0;
}
#include <stdio.h>
#include <stdlib.h>
#include <math.h>



int main(){
    int n;
    scanf("%d", &n);
    int m, p, k, l;
    scanf("%d %d %d %d", &m, &p, &k, &l); //m-num, p-подьезд k-этаж, l-всего этажей
    if (p<1){
        return 0;
    }
    int resp = 0;
    int numk = 0;
    int count = m/((p-1)*l+(k-1));
    resp = (n+l*count-1)/(l*count);
    while(n>count*l){
        n = n - count*l;
    }
    numk = (n+count-1)/count;
    printf("%d %d", resp, numk);
    return 0;
}
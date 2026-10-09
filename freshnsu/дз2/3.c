#include <stdio.h>
void swap(int* a, int* b){
    int prom = 0;
    prom = *a;
    *a = *b;
    *b = prom;
}
int main(){
    int a, b;
    scanf("%d %d", &a, &b);
    swap(&a, &b);
    printf("%d %d", a, b);
}
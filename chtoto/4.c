#include <stdio.h>

void f(int* p) // функция принимает как значение адрес, разыменовывае и кладем значение 
{
    *p = 10;
}

int main()
{
    int* p = NULL;
    if (p){
        
    }
    int n;
    f(&n); 
    printf("%d\n", n);
    return 0;
}
#include <stdio.h>

int main(){
    unsigned int a = 153;
    unsigned int b = (~a)& 0xFF;
    printf("%d %d", a, b);
    return 0;
}
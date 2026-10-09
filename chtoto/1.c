#include <stdio.h>
int func(int a, int b, int c)
{
    return a+b+c;
}
int main(){
    int a;
    int b;
    int c;
    scanf("%d%d%d", &a, &b, &c);
    int res = func(a, b, c);
    printf("%d", res);
    return 0;
}
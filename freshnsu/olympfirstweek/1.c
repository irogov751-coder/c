#include <stdio.h>

int main()
{
    int a;
    int k = 0;
    scanf("%d", &a);
    for(int i =0; i<=a; i++){
        k +=i;
    }
    printf("%d", k);
    return 0;
}
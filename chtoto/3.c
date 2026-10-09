#include <stdio.h>
// &a[n] === a+n
// *(a+n) === a[n] сдвиг по адресу и разыменование 
int main()
{
    int a[5] = {0};
    int* p = a ;
    int* p2 = &a[4];
    int res = p2-p;
    *p = 1;
    ++p;
    *p =2;
    ++p;
    *p = 3;
    for(int i = 0; i<5; ++i)
    {
        printf("%d\n", a[i]);
    }
    printf("%d\n", res);
}
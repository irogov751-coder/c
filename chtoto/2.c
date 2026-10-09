#include <stdio.h>
#define N 1000

int func(int a){
    return a+1;
}

int main()
{
    
    int a[N];
    for(int i = 0; i<N; i++){
        a[i]=func(i);
        printf("%d\n", a[i]);
    }
    printf("\n");
    return 0;
}




#include <stdio.h>

int func(float a, int n){
    int sum = 0;
    float b = 0;
    if(a<0){
        a*=-1;
    }
    b = a - (float)(int)a;
    for(int i=0; i<n;i++){
        b*=10;
        int dig = (int)b;
        sum+=dig;
        b = b-(float)dig;
    }
    return sum;
}

int main(){
    float a;
    int n;
    scanf("%f %d", &a, &n);
    int res = func(a, n);
    printf("%d", res);
    //int res = fact(a);
    //printf("%d", res);
    return 0;
}
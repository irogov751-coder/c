#include <stdio.h>

int prime(int n){
    for(int i = 2; i*i<=n; i++){
        if(n%i==0) return 0;
    }
    return n;
}

int main(void){
    int n;
    scanf("%d", &n);
    for(int i = 2; i<=n ; i++){
        if(prime(i)){
            printf("%d\n", i);
        }
    }
    return 0;
}
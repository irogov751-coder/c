#include <stdio.h>

int fact(int a){
    int fact1 = a;
    for(int i =1; i<a; i++){
        fact1*=i;
    }
    return fact1;
}

int main(){
    int a;
    scanf("%d", &a);
    int res = fact(a);
    printf("%d", res);
    return 0;
}
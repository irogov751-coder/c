#include <stdio.h>

/*int fib(int a){
    if(a==0){
        return 0;
    }
    if(a==1){
        return 1;
    }
    return fib(a-1)+fib(a-2);
}
*/
unsigned long long fib1(int a){
    unsigned long long first = 0;
    unsigned long long second  = 1;
    unsigned long long res = 0;
    for(int i=2; i<=a; i++){
        res = first+second;
        first = second;
        second = res;
    } 
    return res;
}

int main(){
    int a;
    scanf("%d", &a);
    int res = fib1(a);
    printf("%d", res);
    return 0;
}
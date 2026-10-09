#include <stdio.h>


int main(){
    long long input;
    if(scanf("%lld", &input)!=1) return 0;
    long long answer = 0;
    for(long long a = 1; a*a*a<=input; a++){
        for(long long b = a; a*b*b<=input; b++){
            long long max_c = input/(a*b);
            if (max_c>=b){
                answer+=(max_c-b+1);
            }
        }
    }
    printf("%lld", answer);
    return 0;
}
#include <stdio.h>
#include <stdlib.h>

void func(long long* arr, long long* t, int n){
    for(int k = 1; k<=n; k++){
        t[k]=0;
        for(int j = k; j<=n; j+=k){
            t[k]+=arr[j];
        }
    }
}

int main(){ 
    int n;
    long long input1;
    scanf("%d", &n);
    long long* arr = malloc((n+1)*sizeof(long long));
    long long* t = malloc((n+1)*sizeof(long long));
    for(int k = 1; k<=n; k++){
        if(scanf("%lld", &input1)==1){arr[k] = input1;};
        
    }
    func(arr, t, n);
    for(int k = 1; k<=n; k++){
        printf("%lld\n", t[k]);
    }
    free(arr);
    free(t);
    return 0;
}
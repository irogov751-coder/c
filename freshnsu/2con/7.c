#include <stdio.h>
#include <stdlib.h>

void sort(long long* arr, int n){
    for(int i = 0; i<n; i++){
        int acc = 0;
        for(int j = i; j<n;j++){
            if(arr[i]>arr[j]){
                acc = arr[i];
                arr[i] = arr[j];
                arr[j] = acc;

            }
        }
    }
}

int main(){
    int n;
    scanf("%d", &n);
    long long* arr = malloc(n*sizeof(long long));
    for(int i = 0; i<n; i++){
        scanf("%lld", &arr[i]);
    }
    sort(arr, n);
    for(int i = 0; i<n; i++){
        printf("%lld ", arr[i]);
    }
    return 0;


}
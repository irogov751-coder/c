#include <stdio.h>
#include <stdlib.h>

int main(){
    int n;
    int input;
    scanf("%d", &n);
    int arr1[101] = {};
    int arr[101] = {};
    for(int i =0; i<n;i++){
        scanf("%d", &input);
        arr[i] = input;
    }
    for(int i = 0; i<n; i++){
        int proms = 0;
        for(int j = i+1; j<n; j++){
            if (arr[j]<arr[i]){
                proms++;
            }
        }
        arr1[i] = proms;
    }
    for(int i = 0; i<n; i++){
        printf("%d ", arr1[i]);
    }
    return 0;
}
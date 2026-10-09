#include <stdio.h>
#include <stdlib.h>
/*
void sort(long long* arr, int n){
    long long acc = 0;
    for(int i = 0; i<n; i++){
        for(int j = i+1; j<n; j++){
            if(arr[j]<arr[i]){
                acc = arr[i];
                arr[i] = arr[j];
                arr[j] = acc;
            }
        }
    }
}
*/
int main(){
    int n;
    int input;
    scanf("%d", &n);
    long long* sumarr = calloc(100001,sizeof(long long));
    //sort(arr, n);
    for(int k = 0; k<n;k++){
        scanf("%d", &input);
        sumarr[input]++;
    }
    for(int i = 0; i<10001; i++){
        if (sumarr[i]!=0){printf("%d: %lld\n", i, sumarr[i]);}
        
    }




}
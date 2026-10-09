#include <stdio.h>
#include <stdlib.h>


void printtime(int h, int m, int s){
    printf("%02d:%02d:%02d\n", h, m, s);
}


int main(void){
    int n;
    if(scanf("%d", &n)!=1) return 0;
    int* arr = malloc(3*n*sizeof(int));
    if (arr==NULL) return 0;
    for(int i= 0;i<3*n; i++){
        scanf("%d", &arr[i]);
    }
    for(int i = 0; i<n*3-2; i+=3){
        if(arr[i]>=0 && arr[i]<=23 && arr[i+1]>=0 && arr[i+2]>=0 && arr[i+1]<=59 && arr[i+2]<=59){
            printtime(arr[i], arr[i+1], arr[i+2]);
        }
        else{
            return 0;
        }
    }
    return 0;
}
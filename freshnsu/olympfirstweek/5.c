#include <stdio.h>
#include <stdlib.h>

int main(){
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    int n;
    int vod;
    int nummax = 0;
    int nummin = 0;
    int mx = -10000000;
    int min = 10000000;
    scanf("%d", &n);
    int* arr = malloc(n*sizeof(int));
    for(int i=0; i<n; i++){
        scanf("%d", &vod);
        arr[i]=vod;
    }
    for(int i = 0; i<n; i++){
        if(arr[i]>mx){
            mx = arr[i];
            nummax = i+1;
        }
        if(arr[i]<min){
            min = arr[i];
            nummin = i+1;
        }
    }
    free(arr);
    printf("%d %d %d %d", min, nummin, mx, nummax);


    return 0;
}
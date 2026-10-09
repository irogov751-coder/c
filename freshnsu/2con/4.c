#include <stdio.h>
#include <stdlib.h>


int main(){
    int n;
    int input;
    if(scanf("%d", &n)!=1 || n<=0) return 0;

    int bl = 0;
    int br = 0;
    int curn = 0;

    int* arr = malloc(n*sizeof(int));
    for(int i = 0; i<n; i++){
        scanf("%d", &input);
        arr[i] = input;
    }

    int gl_max = arr[0];
    int pr = arr[0];
    for(int i = 1; i<n;i++){
        if(pr<0){
            curn = i;
            pr = arr[i];
        }
        else{
            pr+=arr[i];
        }
        if(pr>gl_max){
            gl_max = pr;
            bl = curn;
            br = i;
        }
    }
    printf("%d %d %d\n", bl, br, gl_max);
    free(arr);
    return 0;
}
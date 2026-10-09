#include <stdio.h>
#include <stdlib.h>


int main(){
    int arr1[100005] ={0};
    int arr2[100005] = {0};
    int n;
    int input;
    int sum = 0;

    int res[100005] = {0};

    scanf("%d", &n);
    for(int i = 0; i<n; i++){
        scanf("%d", &input);
        arr1[input]=1;
    }

    int n1;
    scanf("%d", &n1);
    for(int i = 0; i<n1; i++){
        scanf("%d", &input);
        arr2[input]=1;
    }

    for(int i = 0; i<100005; i++){
        if(arr1[i]>=1 && arr2[i]==0){
            res[i] = arr1[i];
            sum+=arr1[i];
        }
    }

    printf("%d\n", sum);
    for(int i = 0; i<100005; i++){
        if(res[i]>=1){
            printf("%d ", i);
        }
    }
    

    return 0;
}

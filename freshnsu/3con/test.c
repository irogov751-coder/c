#include <stdio.h>
#include <stdlib.h>
/*
int lenght(char* arr){
    int lenght = 0;
    while(*arr!='\0'){
        lenght++;
        arr++;
    }
    return lenght;
}

int main(void){
    char arr1 [100] = {};
    scanf("%s", arr1);
    int res = lenght(arr1);
    printf("%d", res);



    return 0;
}
*/

int g(int* a, int n) {
    int s = 0;
    for (int i = 0; i < n; i += 1)
    if (!a[i]) s++;
    return s;
}
int main(){
    int arr[8] = {0,1,0,1,0,1,1,0};
    int res = g(arr, 8);
    printf("%d", res);
    return 0;
}
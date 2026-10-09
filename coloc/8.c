#include <stdio.h>

int countd(char* arr){
    int s = 0;
    if (arr == NULL) return 0;
    while(*arr!='\0'){
        if (*arr<=57 && *arr>=48){
            s+=1;
        }
        arr++;
    }
    return s;
}

int main(){
    char arr[10]="125535n24G";
    int res = countd(arr);
    printf("%d", res);



}
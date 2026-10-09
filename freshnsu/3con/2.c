#include <stdio.h>
#include <stdlib.h>

void reverselen(char* arr, int len){
    char arr2[105] = {};
    int address = -1;
    while(address>=(-len-1)){
        arr2[address+len]=*arr;
        address--;
        arr++;
    }
    printf("%s\n", arr2);

}
int lenght(char* arr){
    int lenght = 0;
    while(*arr!='\0'){
        lenght++;
        arr++;
    }
    return lenght;
}
int main(void){
    int n;
    if(scanf("%d", &n)!=1) return 0;
    for(int i = 0; i<n; i++){
        char arr[105] = {};
        if(scanf("%s", arr)!=1) return 0;
        reverselen(arr, lenght(arr));
    }
    return 0;
}
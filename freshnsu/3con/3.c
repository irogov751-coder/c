#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void){
    int n;
    if(scanf("%d", &n)!=1) return 0;
    char* arrosn = calloc(n*105, sizeof(char));
    if(arrosn==NULL) return 0;
    for(int i = 0; i<n; i++){
        char arr[105]= {};
        if(scanf("%s", arr)!=1) return 0;
        strcat(arrosn, arr);
    }
    printf("%s\n", arrosn);
    free(arrosn);

    return 0;
}
#include <stdio.h>

int*** mas(int row, int cols, int h){
    int*** arr = malloc(row*sizeof(int**));
    for(int i = 0; i<row; i++){
        arr[i] = malloc(cols*sizeof(int*)){
            for(int j = 0; j<cols; j++){
                arr[i][j] = malloc(h*sizeof(int))
            }
        }
    }
    return arr;
}

int main(){
    


    return 0;
}
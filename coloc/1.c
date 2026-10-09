#include <stdio.h>
#include <stdbool.h>

int sum_positive(int* a, int n) {
    int s =0;
    for (int i = 0; i < n; i++)
    if (a[i] > 0) s += a[i];
    return s;
}

int main(){
    int arr[3] = {1, 2, 3};
    int a = 1;
    int b = 2;
    int c = 3;
    int d = 5;
    bool r = false;
    r = (a == b) ? (c == d) : true;
    int res = sum_positive(arr, 3);
    printf("%d", r);
}
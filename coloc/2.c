#include <stdio.h>
void twice(int* p) {
    *p = *p * 2;
}
int main() {
    int x = 4;
    int y = x;
    twice(&x);
    printf("%d %d\n", x, y);
    return 0;
}
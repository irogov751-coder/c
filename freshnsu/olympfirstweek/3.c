#include <stdio.h>

int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int n, c, sum = 0;
    scanf("%d", &n);
    for(int i = 0; i<n; i++){
        scanf("%d", &c);
        if(c%2==0){
            sum+=c;
        }
    }
    printf("%d\n", sum);
    return 0;

}    
    
#include <stdio.h>
#include <math.h>


int main(){
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    int n;
    int st = 0;
    scanf("%d", &n);
    if(n<=1){
        printf("NO\n");
        return 0;
    }
    for(int i = 2; i<=sqrt(n); i++){
        if (n%i==0){
            st = 1;
            break;
        }
    }
    if (st==0){
        printf("YES\n");
    }
    
    else{
        printf("NO\n");
    }

    return 0;
}
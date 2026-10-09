#include <stdio.h>
#include <stdlib.h>

int main(){
    int n, m;
    long long cx, cy;
    scanf("%d %d", &n, &m);
    int fl = 0;
    int fl2 = 0;
    long long* arrx = calloc((n+1), sizeof(long long)); 
    long long* arry = calloc((n+1), sizeof(long long));
    long long* xy = calloc((n+1), sizeof(long long));
    int is_f = 1;
    for(int i = 1; i<=m; i++){
        long long x, y;
        scanf("%lld %lld", &x, &y);
        if(arrx[x]>0 && xy[x]!=y){
            is_f = 0;
        }
        xy[x] = y;
        arrx[x]++;
        arry[y]++;
    }
    if(is_f==0){
        printf("0\n");
        free(arrx);
        free(arry);
        free(xy);
        return 0;
    }
    printf("1 ");
    int cs = 0;
    for(int i = 1; i<=n; i++){
        if(arrx[i]>0){
            cs++;
        }
        if(cs==n){
            printf("2 ");
        }
    }
    cs = 0;
    int sur = 0;
    for(int i = 1; i<=n; i++){
        
        if(arry[i]<=1){
            cs++;
        }
        if(arry[i]>=1){
            sur++;
        }
        if(cs==n){
            printf("3 ");
            fl = 1;
        }
        if(sur==n){
            printf("4 ");
            fl2 = 1;
        }
        
    }
    if(fl==1 && fl2 ==1){
        printf("5");
    }


    return 0;
}
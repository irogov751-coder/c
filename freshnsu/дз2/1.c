#include <stdio.h>
int power(int number, int step){
    int res = 1;
    for(int i=0; i<step; i++){
        res*=number;
    }
    return res;
}
int reverse(int a){
    int copy_a = a;
    int rev_a = 0;
    int flag = 0;
    int len = 0;
    if(a<=0){
        copy_a*=-1;
        a*=-1;
        flag = 1;
    }
    while(copy_a>0){
        len++;
        copy_a/=10;
    }
    for(int i=len-1;i>=0;i--){
        rev_a+=(a%10)*power(10, i);
        a/=10;
    }
    if (flag==1){
        rev_a*=-1;
    }
    return rev_a;
}


int main(){
    int a;
    scanf("%d", &a);
    int res = reverse(a);
    printf("%d", res);
    return 0;
}
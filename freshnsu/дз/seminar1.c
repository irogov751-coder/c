#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/*
int suma(int a, int b, int c){
    return a+b+c;
}
*/
/*
int min(int a, int b, int c){
    int m = 0;
    if (a<b){
        m = a;
    }
    else{
        m = b;
    }
    if (c<m){
        m = c;
    }
    return m;
}
*/
//void func(int* a){//функция принимает указатель - адрес ячейки памяти
    //*a+=1; //разыменование по адресу увеличение значения
//}

int sumd(int number){
    int sum = 0;
    number = abs(number);
    while(number>0){
        sum+=number%10;
        number/=10;
    }
    return sum;

}

int prime(int n){
    if(n<=1){
        printf("0\n");
        return 0;
    }
    else{
        for(int i = 2; i<=sqrt(n); i++){
            if (n%i==0){
                return 0;
                break;
            }
        }
        return 1;
    }
    
}

int main(){
    //int a, b, c;
    //scanf("%d %d %d", &a, &b, &c);
    //int res = min(a, b, c);
    int a;
    scanf("%d", &a);
    int res = prime(a);
    //func(&a); // передача адреса value - address &
    printf("%d", res);
    return 0;
}
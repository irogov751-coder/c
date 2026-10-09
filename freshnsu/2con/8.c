#include <stdio.h>


int main(){
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    int sum = 0;
    char symbol[10010] = {};
    int lens = 0;
    for(int i = 0; i<10010;i++ ){
        if(scanf("%c", &symbol[i])!=1){
            break;
        }
        if(symbol[i]=='\n'){
            symbol[i] = '\0';
            break;
        }
        lens++;
    }
    for(int i = 0; i<lens;i++ ){
        if(symbol[i]!='.' &&symbol[i]!='\0'){
            if(i == 0||symbol[i-1]=='.')
                sum++;
        }
    }
    
    printf("%d", sum);

    return 0;
}
#include <stdio.h> //обьявление функций которые мы будем использовать, препроцессор вставляет на месте инклуд полный файл
#include <limits.h>

void func()
{
    printf("Hello World\n");
}



int main(){
    int a = 5;
    //do //чтобы выполнить хотя бы одну итерацию цикла
    //{

    //} while(1);
    //while(4)
    //{
        //continue;
        //a = 5;
        //break;
    //};
    //for(int i = 0; i<5; i++)
    //{
    /*
    goto - предназначен для активного перемещения внутри программы 
    */
    //};
    switch(a)
    {
        case 4:
            printf("4");
        case 5:
            a = 0;
        case 7:
            printf("YES\n");
    }
    func();
    return 0;
}





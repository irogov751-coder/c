#include <stdio.h>
#include <stdlib.h>
#include <string.h>

enum {name_l = 50, b_l = 20};

struct tg { //составной тип данных, не создает что то в памяти при создании
    char name[name_l];
    char last[name_l];  
};

struct tg_person{
    struct tg fio;
    char sex;
    unsigned short old;
    char b_d[b_l];
};

int main(){
    struct tg_person person = {
        {"Sergey", "Blabla"},
        'm',
        98,
        "32.07.2028",
    };

    struct tg_person p;
    p = person;

    strcpy(person.b_d, "14.88.9999");
    printf("%c %s\n", person.sex, person.b_d);
    printf("%s %s\n", person.fio.name, person.fio.last);
    printf("%c %s\n", p.sex, p.b_d);


    return 0;
}
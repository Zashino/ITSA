#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
int main(){
    char line[1024];
    int money ,a1 ,a2 ,a3;
    scanf("%s",&line);
    money = atoi(line);
    char *ptr = line;
    while(*ptr!=',')
        ptr++;
    ptr++;
    a1 = atoi(ptr);
    while(*ptr!=',')
        ptr++;
    ptr++;
    a2 = atoi(ptr);
    while(*ptr!=',')
        ptr++;
    ptr++;
    a3 = atoi(ptr);

    int cost = a1*15 + a2*20 + a3*30;
    if(money < cost) {
        printf("0\n");
        return 0;
    }

    money = money - cost;
    int fifty, five, one;
    fifty = money/50;
    money %= 50;
    five = money/5;
    money %= 5;
    one = money/1;
    printf("%d,%d,%d\n",one ,five ,fifty);
}

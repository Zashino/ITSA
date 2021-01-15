#include<stdio.h>
#include<stdlib.h>

int main(){
    char number[20];
    scanf("%s",&number);
    char *ptr=number;
    int letter,x1,x2;
    letter = (*ptr++)-55;
    if(letter == 18)
        letter = 34;
    else if(letter>18 && letter<24)
        letter = letter-1;
    else if(letter == 24)
        letter = 35;
    else if(letter>24 && letter<32)
        letter = letter-2;
    else if(letter==33 || letter==34)
        letter = letter-3;
    else if(letter==35)
        letter = 33;
    x1 = letter/10;
    x2 = letter%10;

    int n1,n2,n3,n4,n5,n6,n7,n8,n9;
    n1 = (*ptr++)-48;
    n2 = (*ptr++)-48;
    n3 = (*ptr++)-48;
    n4 = (*ptr++)-48;
    n5 = (*ptr++)-48;
    n6 = (*ptr++)-48;
    n7 = (*ptr++)-48;
    n8 = (*ptr++)-48;
    n9 = (*ptr++)-48;
    int ans;
    ans = x1 + x2*9 + n1*8 + n2*7 + n3*6 + n4*5+ n5*4 + n6*3 + n7*2 + n8 + n9;
    if((ans%10) == 0)
        printf("CORRECT!!!\n");
    else
        printf("WRONG!!!\n");
}

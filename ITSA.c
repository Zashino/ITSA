#include<stdio.h>
#include<stdlib.h>
int main(){
    int num;
    scanf("%d",&num);
    int num1, num2, num3, num4;
    num1 = num/1000;
    num2 = num%1000/100;
    num3 = num%100/10;
    num4 = num%10;
    if(num1 == 1)
        printf("    *");
    else if (num1 == 4)
        printf("*   *");
    else
        printf("*****");
    printf(" ");
    if(num2 == 1)
        printf("    *");
    else if (num2 == 4)
        printf("*   *");
    else
        printf("*****");
    printf(" ");
    if(num3 == 1)
        printf("    *");
    else if (num3 == 4)
        printf("*   *");
    else
        printf("*****");
    printf(" ");
    if(num4 == 1)
        printf("    *");
    else if (num4 == 4)
        printf("*   *");
    else
        printf("*****");
    printf("\n");

    //第二行
    if(num1 == 5 || num1 == 6)
        printf("*    ");
    else if (num1 == 4 || num1 == 8 || num1 == 9 || num1 == 0)
        printf("*   *");
    else
        printf("    *");
    printf(" ");
    if(num2 == 5 || num2 == 6)
        printf("*    ");
    else if (num2 == 4 || num2 == 8 || num2 == 9 || num2 == 0)
        printf("*   *");
    else
        printf("    *");
    printf(" ");
    if(num3 == 5 || num3 == 6)
        printf("*    ");
    else if (num3 == 4 || num3 == 8 || num3 == 9 || num3 == 0)
        printf("*   *");
    else
        printf("    *");
    printf(" ");
    if(num4 == 5 || num4 == 6)
        printf("*    ");
    else if (num4 == 4 || num4 == 8 || num4 == 9 || num4 == 0)
        printf("*   *");
    else
        printf("    *");
    printf("\n");

    //第三行
    if(num1 == 1 || num1 == 7)
        printf("    *");
    else if (num1 == 0)
        printf("*   *");
    else
        printf("*****");
    printf(" ");
    if(num2 == 1 || num2 == 7)
        printf("    *");
    else if (num2 == 0)
        printf("*   *");
    else
        printf("*****");
    printf(" ");
    if(num3 == 1 || num3 == 7)
        printf("    *");
    else if (num3 == 0)
        printf("*   *");
    else
        printf("*****");
    printf(" ");
    if(num4 == 1 || num4 == 7)
        printf("    *");
    else if (num4 == 0)
        printf("*   *");
    else
        printf("*****");
    printf("\n");

    //第四行
    if(num1 == 2)
        printf("*    ");
    else if (num1 == 0 || num1 == 6 || num1 == 8)
        printf("*   *");
    else
        printf("    *");
    printf(" ");
    if(num2 == 2)
        printf("*    ");
    else if (num2 == 0 || num2 == 6 || num2 == 8)
        printf("*   *");
    else
        printf("    *");
    printf(" ");
    if(num3 == 2)
        printf("*    ");
    else if (num3 == 0 || num3 == 6 || num3 == 8)
        printf("*   *");
    else
        printf("    *");
    printf(" ");
    if(num4 == 2)
        printf("*    ");
    else if (num4 == 0 || num4 == 6 || num4 == 8)
        printf("*   *");
    else
        printf("    *");
    printf("\n");

    //第五行
    if(num1 == 1 || num1 == 4 || num1 == 7 || num1 == 9)
        printf("    *");
    else
        printf("*****");
    printf(" ");
    if(num2 == 1 || num2 == 4 || num2 == 7 || num2 == 9)
        printf("    *");
    else
        printf("*****");
    printf(" ");
    if(num3 == 1 || num3 == 4 || num3 == 7 || num3 == 9)
        printf("    *");
    else
        printf("*****");
    printf(" ");
    if(num4 == 1 || num4 == 4 || num4 == 7 || num4 == 9)
        printf("    *");
    else
        printf("*****");
    printf("\n");
}

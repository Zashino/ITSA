#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=0; i<n; i++) {
        char cha[50],chb[50];
        int a[50] ,b[50] ,c[50] ,len;
        for(int j=0; j<50; j++) {
            a[j] = 0;
            b[j] = 0;
            c[j] = 0;
        }
        scanf("%s %s",cha ,chb);
        len = strlen(cha);
        for(int j=0; j<len; j++)
            a[len - j -1] = cha[j]-48;

        len = strlen(chb);
        for(int j=0; j<len; j++)
            b[len - j -1] = chb[j]-48;

        int sum=0, carry=0;
        for(int j=0; j<50; j++) {
            sum = a[j] + b[j] + carry;
            c[j] = sum % 10;
            carry = sum/10;
        }

        int k;
        for(k=49; k>0 && c[k]==0; k--)
            ;
        while(k != -1) {
            printf("%d",c[k]);
            k--;
        }
        printf("\n");
    }
}

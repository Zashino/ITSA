#include <stdio.h>
#include <stdlib.h>
int main(){
    int n;
    scanf("%d",&n);
    char op;
    int real1, unreal1, real2, unreal2;
    for (int i=0; i<n; i++){
        scanf(" %c %d %d %d %d",&op ,&real1 ,&unreal1 ,&real2 ,&unreal2);
        if (op == '+') {
            printf("%d %d\n",real1+real2 ,unreal1+unreal2);
        }
        else if (op == '-') {
            printf("%d %d\n",real1-real2 ,unreal1-unreal2);
        }
        else if (op == '*') {
            printf("%d %d\n",real1*real2-unreal1*unreal2, unreal1*real2+real1*unreal2);         }
    }
}

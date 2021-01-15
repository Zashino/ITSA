#include<stdio.h>
#include<stdlib.h>

int main(){
    double ratio, money ,all;
    int n;
    scanf("%lf %d %lf",&ratio ,&n ,&money);
    for(int i=0; i<n; i++) {
        all += money;
        all = all*(1+ratio);
    }
    printf("%d\n",all);
}

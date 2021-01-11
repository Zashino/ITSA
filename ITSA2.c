#include <stdio.h>
#include <stdlib.h>
int main(){
    int mile;
    double km;
    while(scanf("%d",&mile)!=EOF){
        km = (double)mile * 1.6;
        printf("%.1f\n",km);
    }
}

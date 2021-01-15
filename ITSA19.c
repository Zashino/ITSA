#include<stdio.h>
#include<stdlib.h>

int main(){
    int n;
    scanf("%d",&n);
    int car[n][30];
    for(int i=0; i<n; i++) {
        for(int j=0; j<30; j++) {
            car[i][j] = 0;
        }
        int start, des;
        scanf("%d %d",&start ,&des);
        for(int j=start+1; j<=des; j++) {
            car[i][j] = 1;
        }
    }
    int max_all=0,all=0;
    for(int j=0; j<30; j++) {
        all = 0;
        for(int i=0; i<n; i++) {
            if(car[i][j] == 1){
                all++;
            }
        }
        if(all > max_all)
            max_all = all;
    }
    printf("%d\n",max_all);
}

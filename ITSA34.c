#include<stdio.h>
#include<stdlib.h>

int main(){
    float cm;
    int gender;
    while(scanf("%f %d",&cm,&gender)!=EOF) {
        if(gender == 1) {
            printf("%.1f\n",(cm-80)*0.7);
        }
        else if(gender == 2) {
            printf("%.1f\n",(cm-70)*0.6);
        }
    }
}

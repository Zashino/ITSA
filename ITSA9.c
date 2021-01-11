#include <stdio.h>
#include <stdlib.h>

int main(){
    int num,i=1,total=0;
    scanf("%d",&num);
    while(i<=num){
        if(i%3 == 0)
            total = total + i;
        i++;
    }
    printf("%d\n",total);
}

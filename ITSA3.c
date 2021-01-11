#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main(){
    int x[2];
    for(int i=0;i<2;i++){
        scanf("%d",&x[i]);
    }
    if(pow(x[0],2)+pow(x[1],2)<=pow(100,2)){
        printf("inside\n");
    }
    else{
        printf("outside\n");
    }
}

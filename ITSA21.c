#include<stdio.h>
#include<stdlib.h>

int main(){
    float a[10];
    for(int i=0; i<10; i++)
        scanf("%f",&a[i]);
    float max=a[0], min=a[0];
    for(int i=0; i<10; i++) {
        if (a[i] > max)
            max = a[i];
        if (a[i] < min)
            min = a[i];
    }
    printf("maximum:%.2f\n",max);
    printf("minimum:%.2f\n",min);
}

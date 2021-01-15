#include<stdio.h>
#include<stdlib.h>

int main(){
    int arr[3][3],flag=0;
    for(int i=0; i<3; i++)
        for(int j=0; j<3; j++)
            scanf("%d",&arr[i][j]);
    for(int i=0; i<3; i++) {
        if(arr[i][0]==arr[i][1] && arr[i][1]==arr[i][2])
            flag = 1;
    }
    for(int j=0; j<3; j++) {
        if(arr[0][j]==arr[1][j] && arr[1][j]==arr[2][j])
            flag = 1;
    }
    if(arr[0][0]==arr[1][1] && arr[1][1]==arr[2][2])
        flag = 1;
    if(arr[0][2]==arr[1][1] && arr[1][1]==arr[2][0])
        flag = 1;
    if(flag == 1)
        printf("True\n");
    else
        printf("False\n");
}

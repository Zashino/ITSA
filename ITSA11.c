#include <stdio.h>
#include <stdlib.h>
int main() {
    int row ,col;
    while(scanf("%d %d",&row ,&col)!=EOF) {
        int num = row*col;
        int array[row][col];
        for (int i=0; i<row; i++){
            for (int j=0; j<col; j++){
                scanf("%d",&array[i][j]);
            }
        }
        for (int i=0; i<col; i++) {
            for (int j=0; j<row; j++){
                printf("%d",array[j][i]);
                if (j != row-1)
                    printf(" ");
            }
            printf("\n");
        }
    }
}

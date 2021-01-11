#include <stdio.h>
#include <stdlib.h>
int main(){
    int season;
    scanf("%d",&season);
    if(3 <= season && season <= 5)
        printf("Spring\n");
    else if(6 <= season && season <= 8)
        printf("Summer\n");
    else if(9 <= season && season <= 11)
        printf("Autumn\n");
    else
        printf("Winter\n");
}

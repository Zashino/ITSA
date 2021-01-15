#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
int main(){
    char word[1024];
    char* array[1024];
    int all=0, flag;
    while(scanf("%s",word) != EOF) {
        char *ptr = word;
        while(*ptr!='\0') {
            *ptr = tolower(*ptr);
            ptr++;
        }
        flag = 1;
        if(all == 0) {
            array[all] = (char *)malloc(sizeof(strlen(word)));
            strcpy(array[all], word);
            all++;
            continue;
        }
        for(int i=0; i<all; i++) {
            if(strcmp(array[i], word) == 0) {
                flag = 0;
                break;
            }
        }
        if(flag==1) {
            array[all] = (char *)malloc(sizeof(strlen(word)));
            strcpy(array[all], word);
            all++;
        }
    }
    for(int i=0; i<all-1; i++) {
        printf("%s ",array[i]);
    }
    printf("%s\n",array[all-1]);
    return 0;
}

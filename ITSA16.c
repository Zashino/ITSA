#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main() {
    char line[1024], word[256];
    scanf("%s",&word);
    scanf("%s",&line);
    int cnt=0;
    char *ptr=line;
    while(strstr(ptr, word)!=NULL) {
        ptr = strstr(ptr, word);
        ptr++;
        cnt++;
    }
    printf("%d\n",cnt);
    return 0;
}

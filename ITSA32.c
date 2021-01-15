#include<stdio.h>
#include<stdlib.h>

int main(){
    char line[1024],newline[1024];
    int n;
    fgets(line ,1024 ,stdin);
    scanf("%d",&n);

    char *ptr=line,*qtr=newline;
    while(*ptr!='\n' || *ptr!='\0'){
        int x=*ptr;
        *qtr = 'x+n';
        qtr++;
        ptr++;
    }
    *qtr++ = '\n';
    *qtr = '\0';
    printf("%s",newline);
}

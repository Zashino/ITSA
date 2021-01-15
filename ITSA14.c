#include <stdio.h>
#include <string.h>
#include <string.h>
int main()
{
    char line[1024];
    char *ptr;
    int dic[128];
    fgets(line, 1024, stdin);
        ptr = line;
        int cnt=0;
        for (int i=0; i<128; i++) {
            dic[i] = 0;
        }
        while(*ptr!='\0') {
            if (*ptr==' ')
                cnt++;
            if (*ptr<123 && *ptr>96)
                dic[*ptr]++;
            else if(*ptr<91 && *ptr>64)
                dic[*ptr+32]++;
            ptr++;
        }
        if (*ptr == '\0')
            cnt++;
        printf("%d\n",cnt);
        for (int i=0; i<128; i++) {
            if (dic[i] != 0)
                printf("%c : %d\n",i ,dic[i]);
        }
    return 0;
}

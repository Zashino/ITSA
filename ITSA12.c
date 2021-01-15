#include <stdio.h>
#include <stdlib.h>
int function(int k)
{
    if (k == 0 || k == 1)
        return k+1;
    return function(k-1) + function(k/2);
}
int main() {
    int k, ans;
    scanf("%d",&k);
    ans = function(k);
    printf("%d",ans);
}


#include <stdio.h>

int main(){
    int h, m, s;
    char loa;

    scanf("%d:%d:%d%c", &h, &m, &s, &loa);
    if(loa == 'P' && h < 12) h += 12;
    if(loa == 'A' && h == 12) h = 0;

    printf("%02d:%02d:%02d", h, m, s);
    return 0;
}
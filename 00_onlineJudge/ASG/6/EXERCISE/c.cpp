#include <stdio.h>
#include <string.h>

int main(){
    int n;
    scanf("%d", &n);
    int arr[1000] = {};
    int counter = 0;
    for (int i = 0; i < n; i++){
        char str[100001];
        scanf("%s", str);
        for (int j = 0; j < strlen(str); j++){
            if (arr[str[j]] == 0) counter++;
            arr[str[j]]++;
        }
        if (counter % 2 == 0) printf("Case #%d: Breakable\n", i+1);
        else printf("Case #%d: Unbreakable\n", i+1);
    }
    return 0;
}
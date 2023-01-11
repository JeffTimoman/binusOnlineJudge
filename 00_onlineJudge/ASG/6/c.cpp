#include <stdio.h>
#include <string.h>

int main(){
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++){
        int counter = 0;
        int arr[250] = {};
        char str[100001];
        scanf("%s", str);
        getchar();
        int len = strlen(str);
        for (int j = 0; j < len; j++){
            if (arr[str[j]] == 0) counter++;
            arr[str[j]]++;
        }
        // printf("%d\n", counter);
        if (counter %2 == 0) printf("Case #%d: Breakable\n", i+1);
        else printf("Case #%d: Unbreakable\n", i+1);
    }
    return 0;
}
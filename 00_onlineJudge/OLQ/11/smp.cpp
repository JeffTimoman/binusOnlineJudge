#include <stdio.h>

int main()
{
    int q;
    long long prefix[5050] = {};
    int n;
    long long m;
    long long x;
    scanf("%d", &n);
    prefix[0] = 0;
    for (int j = 1; j <= n;j++)
    {
        scanf("%lld", &x);
        prefix[j] = x + prefix[j - 1];
    }

    scanf("%d", &q);
    for (int i = 0; i < q;i++)
    {
        scanf("%lld", &m);
        int max = -1;
        for (int j = 0; j < n;j++)
        {
            for (int k = n; k >= j+1;k--)
            {
                if(prefix[k]-prefix[j] <= m)
                {
                    if(k-j > max)
                    {
                        max = k - j;
                        break;
                    }
                    if(k-j < max)
                        break;
                }
        }
        printf("Case #%d: %d\n", i + 1, max);
    }
}
}
#include <stdio.h>

const long long int MAX_LONG = 0x7fffffff;
bool check(int A, int v[], long long mid, int m)
{
    int n = m, i = 0, tot = 1;
    long long count = 0;
    while (i < n)
    {
        if ((long long)v[i] > mid)
            return false;
        if (count + (long long)v[i] > mid)
        {
            tot++;
            count = 0;
        }
        if (count <= mid)
        {
            count += (long long)v[i];
            i++;
        }
    }
    if (tot <= A)
        return true;
    return false;
}
void print(int pos, int k, int v[], long long mid)
{
    long long count = 0;
    int pos_till = -1;
    for (int i = pos; i >= 0; i--)
    {
        if (count + v[i] > mid || i == k - 2)
        {
            print(i, k - 1, v, mid);
            pos_till = i;
            break;
        }
        count += v[i];
    }
    if (pos_till >= 0)
        printf("/ ");
    for (int i = pos_till + 1; i <= pos; i++)
        printf("%d ", v[i]);
}

long long binary_search(int v[], int A, int n)
{
    long long low = 1, high = MAX_LONG, mid, ans = MAX_LONG;
    while (low < high)
    {
        mid = low + (high - low) / 2;
        if (check(A, v, mid, n))
        {
            ans = (ans < mid) ? ans : mid;
            // min(ans , mid);
            high = mid;
        }
        else
            low = mid + 1;
    }
    return ans;
}
int main()
{
    // printf("%lld\n", sizeof(long long));
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int m, k;
        scanf("%d%d", &m, &k);
        int v[m + 1];
        for (int i = 0; i < m; )scanf("%d", &v[i++]);

        long long ans = binary_search(v, k, m);
        print(m - 1, k, v, ans);
        printf("\n");
    }
    return 0;
}
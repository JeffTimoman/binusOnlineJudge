#include <stdio.h>
#include <math.h>

const long long int MAX_LONG = 9223372036854775807;

bool check(int group, int arr[], long long mid, int m)
{
    int n = m, i = 0, tot = 1;
    long long count = 0;
    while (i < n)
    {
        if ((long long)arr[i] > mid)
            return false;
        if (count + (long long)arr[i] > mid)
        {
            tot++;
            count = 0;
        }
        if (count <= mid)
        {
            count += (long long)arr[i];
            i++;
        }
    }
    if (tot <= group)
        return true;
    return false;
}
void print(int pos, int k, int arr[], long long mid)
{
    long long count = 0;
    int pos_till = -1;
    for (int i = pos; i >= 0; i--)
    {
        if (count + arr[i] > mid || i == k - 2)
        {
            print(i, k - 1, arr, mid);
            pos_till = i;
            break;
        }
        count += arr[i];
    }
    if (pos_till >= 0)
        printf("/ ");
    for (int i = pos_till + 1; i <= pos; i++)
        printf("%d ", arr[i]);
}

long long binary_search(int arr[], int group, int n)
{
    long long low = 1, high = MAX_LONG, mid, ans = MAX_LONG;
    while (low < high)
    {
        mid = low + (high - low) / 2;
        if (check(group, arr, mid, n))
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
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n, group;
        scanf("%d %d", &n, &group);
        int arr[n + 1];
        for (int i = 0; i < n; scanf("%d", &arr[i++]));
        
        long long ans = binary_search(arr, group, n);
        print(n - 1, group, arr, ans);
        printf("\n");
    }
    return 0;
}
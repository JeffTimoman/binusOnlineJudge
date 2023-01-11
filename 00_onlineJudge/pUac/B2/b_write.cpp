#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
#define pii pair < int , int >
#define pb push_back
#define mp make_pair
#define mod 1000000009

FILE *fp, *fp2;

bool check(int A , vector<int> &v , ull mid){
    int  n = v.size() , i = 0 , tot = 1;
    ull count = 0;
    while(i < n)
    {
        if((long long)v[i] > mid)
            return false;
        if(count + (long long )v[i] > mid){
            tot++;
            count = 0;
        }
        if(count <= mid){
            count += (long long)v[i];
            i++;
        }
    }
    if(tot <= A)
        return true;
    return false;
}
bool print(int pos , int k ,vector<int> &v , ull mid){
    ull count = 0;
    int pos_till = -1;
    for(int i = pos ; i>= 0 ; i--){
        if(count + v[i] > mid || i == k-2){
            print(i , k-1  , v , mid);
            pos_till = i;
            break;
        }
        count += v[i];
    }
    if(pos_till >= 0)
        fprintf(fp2 , "/ ");
    for(int i = pos_till +1 ; i<= pos ; i++)
        fprintf(fp2 , "%d " , v[i]);
}
ull binary_search(vector<int> &v , int A){
    ull low = 1 , high = LLONG_MAX , mid , ans = LLONG_MAX;
    while(low < high){
        mid = (low + high)>>1;
        if(check(A , v , mid)){
            ans = min(ans , mid);
            high = mid;
        } else
            low = mid+1;
    }
    return ans;
}
int main(){
    fp = fopen("testdata.in", "r");
    fp2 = fopen("testdata.out", "w");
    int t;
    fscanf(fp , "%d" , &t);
    while(t--){
        int m , k;
        fscanf(fp , "%d %d" , &m , &k);
        vector<int> v(m);
        for(int i = 0 ; i < m ; i ++){
            fscanf(fp , "%d" , &v[i]);
        }
        v.pb(0);
        ull ans = binary_search(v , k);
        print(v.size() - 2 , k , v , ans);
        fprintf(fp2, "\n");
    }
    fclose(fp);
    fclose(fp2);
    return 0;
}
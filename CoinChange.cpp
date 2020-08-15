
#include <bits/stdc++.h>
using namespace std;


#define ll            long long
#define fo(i, a, b)   for (ll i = a; i < b; i++)
#define foi(i, a, b)  for (ll i = b - 1; i >= a; i--)
#define vl            vector<ll>
#define vi            vector<int>
#define all(x)        (x).begin() , (x).end()
const int maxn=1e6+15;
const int maxm=1e7+5;
const int mod=1e9+7;
const int inf=0x3f3f3f3f;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
#endif

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    //int n;
    //cin >> n ;
    //cout << n << endl;
    
    vi v = {1 ,2 , 3};  //possible coins
    int m = v.size();
    int n = 4;

    vi ans(n+1 , 0); // total possible ways to get changes for sum i.
    ans[0] = 1;
    fo(i , 0 ,m)
    {
        fo(j, 1, n+1)
        {
            ans[j] += ((j-v[i] >=0) ? ans[j-v[i]] : 0);
        }
    }
    fo(i , 0 , n+1) cout << ans[i] << " ";
}
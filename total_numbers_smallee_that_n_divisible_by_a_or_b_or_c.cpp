#include <bits/stdc++.h>
using namespace std;

#define vi vector<int>
#define watch(x) cout << (#x) << " is " << (x) << endl 
#define PI 3.14
#define ll long long
#define fo(i, a, b) for (ll i = a; i < b; i++)
#define foi(i, a, b) for (ll i = b - 1; i >= a; i--)
#define vl vector<ll>
#define vi vector<int>
#define vll vector<pair<ll, ll>>
#define vii vector<pair<int, int>>  
int gcd(int a, int b) {if (a == 0 || b == 0) return max(a,b); if (b % a == 0) return a; return gcd(b%a, a);}
const int maxn=1e6+15;
const int maxm=1e7+5;
const int mod=1e9+7;
const int inf=0x3f3f3f3f;

void solve()
    {
        long long n , a, b, c;
        cin >> n >> a >> b >>c;
        long long lcm = a*b*c;
        long long ans =0ll;
        for(long long i = 0 ; i<lcm ; i++)
        {
            if(!(i%a) || !(i%b) || !(i%c)) continue;
            else ans++;
        }
        cout << ans << endl;

    }

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
#endif

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--)
    {
        solve();
    }
}
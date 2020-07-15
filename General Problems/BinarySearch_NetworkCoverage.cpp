//https://codeforces.com/problemset/problem/1373/F

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
        ll n;
        cin>> n;
        ll a[n] , b[n]; 
        fo(i , 0 , n) cin >> a[i];
        fo(i , 0 , n) cin >> b[i];

        if(accumulate(a , a+n , 0ll) > accumulate(b , b+n , 0ll)) 
        {
             cout << "NO\n";
            return;
        }

        ll need  = 0;
        fo(i , 0 , 2*n)
        {
            ll ca = a[i%n];
            ll cb = b[(i + n -1)%n];
            need += ca-cb;
            need = max(need , 0ll);
            if(need > b[i%n]) 
            {
                cout<< "NO\n"; 
                return;
            }
        }
        cout << "YES\n";
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
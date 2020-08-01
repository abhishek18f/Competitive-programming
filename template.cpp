#include <bits/stdc++.h>
using namespace std;

#define mp(x,y)       make_pair((x)  , (y))                   //make_pair creates a pair<int,int> object
#define watch(x)      cout << (#x) << " is " << (x) << endl 
#define PI            3.14159265
#define F             first
#define S             second
#define ll            long long
#define fo(i, a, b)   for (ll i = a; i < b; i++)
#define foi(i, a, b)  for (ll i = b - 1; i >= a; i--)
#define vl            vector<ll>
#define vi            vector<int>
#define vvi           vector<vi> 
#define vll           vector<pair<ll, ll>>
#define vii           vector<pair<int, int>>  
#define all(x)        (x).begin() , (x).end()
#define tr(container, it)               for(typeof((container).begin()) it = (container).begin(); it != (container).end(); it++)
#define present(container, element)     ((container).find(element) != (container).end())
#define cpresent(container, element)    (find(all((container)),element) != (container).end())
int gcd(int a, int b) {if (a == 0 || b == 0) return max(a,b); if (b % a == 0) return a; return gcd(b%a, a);}
const int maxn=1e6+15;
const int maxm=1e7+5;
const int mod=1e9+7;
const int inf=0x3f3f3f3f;

void solve()
    {
        
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
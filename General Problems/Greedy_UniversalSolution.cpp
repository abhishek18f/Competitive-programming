//https://codeforces.com/problemset/problem/1380/B

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
    string str;
    cin >> str;

        unordered_map<char , char> m;
    m['R'] = 'P';
    m['P'] = 'S';
    m['S'] = 'R';


    int r  =0 ;
    int p =0 ;
    int s = 0;

    fo(i , 0 , str.length())
    {
        if(str[i] == 'R') r++;
        if(str[i] == 'P') p++;
        if(str[i] == 'S') s++;
    }
    char maxChar;
     maxChar = (r >= p )? ((s>=r) ? 'S' : 'R') : ((s>=p) ? 'S' : 'P') ;
    fo(i, 0 , str.length()) str[i] = m[maxChar];
    cout << str << endl; 
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
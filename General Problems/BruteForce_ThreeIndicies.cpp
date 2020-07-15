//https://codeforces.com/contest/1380/problem/A

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
        
        int n;
        cin>> n;
        int a[n];
        int min = -1 , minI = -1;
        int max = -1 , maxI = -1;
        
        fo(i , 0 , n) cin >> a[i];
        fo(i , 0 , n) 
        {
            //cout<< "iop\n";
            if(i == 0) continue;
            if(a[i] > a[i-1]) 
            {
                min = a[i-1]; minI = i-1;
                maxI = i ; max =a[i];
                break;
            }
        }
        //cout << min << " " << minI <<" " << max << " " << maxI << endl;
        if(minI == -1) {cout << "NO\n"; return;}

        for(int i = maxI+1 ; i< n ; i++)
        {
            if(a[i] > max) max = a[i]; maxI = i;
            if(a[i] < max)
            {
                cout << "YES\n";
                cout << minI+1 << " " << maxI << " " << i+1 << "\n";
                return;
            }
        }
        cout << "NO\n" ; 
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
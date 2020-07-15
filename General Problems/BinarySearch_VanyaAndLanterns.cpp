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

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
#endif

    //ios_base::sync_with_stdio(false);
    //cin.tie(NULL);

    int n , d;
    cin >> n >> d;
    vi v;
    fo(i , 0 , n) 
    {
        int t;
        cin >> t;
        v.push_back(t);
    }
    sort(v.begin() , v.end());
    int max0 = 2*max(v[0] , d - v[n-1]);
    fo(i , 1 , n)
    {
        max0 = max(max0 , v[i] - v[i-1]);
    }
    
    //double max1 = max/2.;
    printf("%.10f\n" , max0/2.);
    
}
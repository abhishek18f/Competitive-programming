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

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--)
    {
        ll n , x , m;
        ll a[2];
        cin >>n >> x >>m;   
        a[0] = x;
        a[1] = x;
        
        while(m--)
        {
            ll  l ,r;
            cin >> l >> r;
            if(r >=a[0] && l<=a[1]) 
            {
                a[0] = min(a[0] , l);
                a[1] = max(a[1] , r);
            } 
        }
        cout << a[1] - a[0] +1 << endl;
    }
}



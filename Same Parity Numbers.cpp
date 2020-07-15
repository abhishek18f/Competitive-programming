#include <bits/stdc++.h>
using namespace std;

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
        int n, k , i , j ;
        int temp;
        cin >> n >> k;

        int a  = n-k+1;
        if(a&1 && a>0)
        {
            cout << "YES\n";
            fo(i , 0 , k-1) cout << 1 << " ";
            cout << a << endl;
            continue;
        }

        int b = n-2*(k-1);
        if(!(b&1) && b>0)
        {
            cout << "YES\n";
            fo(i , 0 , k-1) cout << 2 << " ";
            cout << b << endl;
            continue;
        }
        cout << "NO\n";
    }
}
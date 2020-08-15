//READ CATALAN NUMBERS ON WIKIPEDIA



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

    int n;
    cin >> n ;
    cout << n << endl;
    
    vi cn(n+1 , 0); // catalin numbers

    //C0 = 1
    // Cn = (summation from i = 0 to n-1)Ci*C(n-1-i);

    cn[0] = 1;
    fo(i , 0 , n+1)
    {
        fo(j,0,i) cn[i] += cn[j]*cn[i-j-1];
    }

    cout << cn[n];        
}
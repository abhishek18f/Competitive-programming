#include <bits/stdc++.h>
using namespace std;


#define ll            long long
#define fo(i, a, b)   for (ll i = a; i < b; i++)
#define foi(i, a, b)  for (ll i = b - 1; i >= a; i--)
#define vl            vector<ll>
#define vi            vector<int>
#define vvi           vector<vi> 
#define all(x)        (x).begin() , (x).end()
const int maxn=1e6+15;
const int maxm=1e7+5;
const int mod=1e9+7;
const int inf=0x3f3f3f3f;

//using dp
//O(n*r) time comlexity
//O(n*n) space complexity
int binomial(int n , int r)
{
    vvi bin(n+1 , vi(n+1 , 0));
    fo(i , 0 , n+1)
        fo(j , 0 , i+1)
        {
            if(j==0 || i==j) bin[i][j] = 1;
            else bin[i][j] = bin[i-1][j] + bin[i-1][j-1] ;
       }

    return bin[n][r];
}

//M2
//O(r) time complexity
//O(1) space complexity
int bin(int n , int r)
{
    int ans = 1;
    if(r > n-r) r = n-r;
    
    fo(i , 1 , r+1)
    {
        ans *= n-i+1;
        ans /= i;
    }
    return ans;
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
#endif

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n , k;
    //cin >> n >> k ;
    //cout << n << endl;
    n=5 ; k = 2;
    cout << bin(n, k);
    
        
}
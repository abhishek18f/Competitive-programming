//Bell number(Bell[n]) is the number of ways to partition of set of n elements
//Bell[n] = sum of B(n,k) for k = 0 to n
//1, 1, 2, 5, 15, 52, 203, …. 
//B(n+1,k) = k*B(n,k) + B(n,k-1)

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


//number of ways to partition a set of n elements in k subsets
int countP(int n , int k)
{
    vvi v(n+1 , vi(k+1  , 0));
    fo(i , 1 , n+1)
        fo(j , 1 , i+1)
        {
            if(i==j || j==1) v[i][j] = 1;
            else v[i][j] = j*v[i-1][j]  + v[i-1][j-1];
        }
    return v[n][k];
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
    cin >> n ;
    //cout << n << endl;
    
    //n = 5;
    //alternative method for calculating bell number without B
    //Triangular method 

    vvi v(n+1 , vi(n+1 , 0));
    v[0][0] = 1;
    fo(i , 1 , n+1)
        fo(j , 0 , i+1)
            if(j == 0) v[i][j] = v[i-1][i-1];
            else v[i][j] = v[i][j-1] + v[i-1][j-1];

    cout << v[n][0];
    
    //cout << countP(5, 2);
    
        
}



// T(n, sum) = T(n-1, sum) || T(n-1 , sum - a[n]);

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

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
#endif

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int a[] = { 3, 34, 4, 12, 5, 2 }; 
    int sum = 9; 
    cin>>sum;
    int m = 6;

//O(sum*m) space complexity
    // vector<vector<bool> > ans(m+1 , vector<bool>(sum + 1 , 0));

    // fo(i,0, m+1) ans[i][0] = true;
    // fo(i , 1 , sum + 1) ans[0][i] = false;

    // for(int i = 1 ; i<=m ; ++i)
    //     for(int j = 1 ; j <=sum ; ++j)
    //     {
    //         if(j < a[i-1]) ans[i][j] = ans[i-1][j];
    //         else
    //         {
    //             ans[i][j] = ans[i-1][j] || ans[i-1][j-a[i-1]];
    //         }
    //     }
    // cout << ans[m][sum]; 

//O(sum) complexity
    vector<vector<bool> > arr(2 , vector<bool>(sum + 1 , 0));
    for(int i = 0 ; i<=m ; ++i)
     for(int j = 0 ; j <=sum ; ++j)
     {
         if(j==0) arr[i %2][j] = true;
         else if(i==0) arr[i % 2][j] = false;
         else if (j < a[i-1]) arr[i%2][j] = arr[(i + 1) % 2][j];
         else  arr[i %2][j] = arr[(i + 1)%2][j] || arr[(i + 1)%2][j-a[i-1]]; 
     }


    cout << arr[(m-1)%2][sum];    
}
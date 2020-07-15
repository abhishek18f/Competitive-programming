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
        int n , m;
        cin >> n >> m;
        int zeros[n+m];
        int ones[n+m];
        int t;
        int ans = 0;
        memset(zeros , 0 , sizeof(zeros));
        memset(ones , 0 , sizeof(ones));
        
        fo(i , 1 , n+1)
            fo(j , 1 , m+1)
            {   
                cin>>t;
                if(t &1) ones[i+j-1]++;
                else zeros[i+j-1]++; 
            } 

        fo(i,1,(n+m)/2 + 1) 
            if(!((n+m) &1) && i == (n+m)/2 ) continue;
            else
            {
                if(zeros[i]) ans += min(zeros[i] , ones[n+m-i] );
                if(ones[i]) ans += min(ones[i] , zeros[n+m-i]);
            } 

        cout << ans << endl;
            
    }
}
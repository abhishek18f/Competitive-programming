//https://community.topcoder.com/stat?c=problem_statement&pm=1901&rd=4650

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
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
#endif

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int workers;
    cin>>workers;
    int size  = 1000;
    int n;
    cin >> n;
    int a[n];
    fo(i , 0 , n) cin >> a[i];
    int l = a[n-1];
    int u = size;
    //int count  = 0;
    while(l<u)
    {   
        int x = l + (u-l)/2;
        int sum = 0;
        int required = 1;
        for(int i =0  ; i<n ; ++i)
        {
            
            if(sum + a[i] <=x) {
                sum+=a[i];
                cout << sum << "\n";
            }
            else {
                required++;
                sum = a[i];
                cout << sum << "\n";
            }
        }

        if(required<=workers) u = x;
        else l = x+1; 
        cout << "l = " << l << " u = " << u <<" required = " << required << "\n";
        //if(l==169) break;
    }
    cout <<l;
}
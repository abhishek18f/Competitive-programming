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


int solve(int fn[] , int n)
{
    if(n <=1) return n;
    if(fn[n] != -1) return fn[n];
    return (fn[n] = solve(fn , n -1)  + solve(fn , n -2));
}

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
    //n = 150;
    int fn[n+1]; //fibonacci numbers array;
    fo(i , 0 , n+ 1 ) fn[i] = -1;
    
//tabulizatioon(bottom - up approach)
    // fn[0] = 0; fn[1] = 1;
    // fo(i , 2 , n+1) fn[i] = fn[i-1] + fn[i-2];
    //cout << fn[n];

// memoization
    cout <<  solve(fn , n);

    

        
}
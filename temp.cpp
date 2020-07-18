//https://codeforces.com/contest/1380/problem/A

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
const int maxn=1e6+15;
const int maxm=1e7+5;
const int mod=1e9+7;
const int inf=0x3f3f3f3f;


void rk(char* txt , char* pat , int q)
{
    int m = strlen(pat);
    int n = strlen(txt);
    
    int d = 256;
    int p = 0; // hash value for pattern;
    int t = 0; //hash value for text;
    int h = 1;  //h = d^(m-1)

    

    for(int i  = 0 ; i <m-1 ; i++)
        h = (d*h) % q;

    //calculate hash value of pattern and first window
    for(int j = 0; j<m ; j++)
    {
        p = (d*p + pat[j]) % q;
        t = (d*t + txt[j]) % q;
    }

    //slide the window
    for(int i = 0 ; i<= n-m ; i++)
    {
        if(p==t)
        {
            int j;
            for( j = 0 ; j < m ; j++)
            {
                if(pat[j] != txt[i+j]) break;
            }

            if(j == m) 
                //pattern found at i :)
                cout << "pattern found at  = " << i << "\n";
        }
        
        if(i < n-m)
            {
                //rehaashing
                t = (d*(t - txt[i]*h) + txt[i+m]) % q;

                if(t<0) t = t + q;
            }
        
    }

}

int main()
{
#ifndef ONLINE_JUDGE
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
#endif

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // int t;
    // cin >> t;
    // while(t--)
    // {
    //     solve();
    // }

    char txt[] = "ABABDABACDABABCABAB"; 
    char pat[] = "ABABCABAB"; 

    // char txt[] = "GEEKS FOR GEEKS";  
    // char pat[] = "GEEK";  
    rk(txt , pat , 101 ); 
}
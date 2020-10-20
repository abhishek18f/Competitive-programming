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
        int a ,b;
        cin >>a>> b;
        int ans =0;
        while(a&&b)
        {   
            if(a==1 && b==1) break;
            ans++;
            if(a>=b)
            {
                a -=2;
                b -=1;
            }

            else if(b>a)
            {
                a -=1;
                b-=2;
            }
        }
        cout << ans << endl;

        //SOLUTION 2;
        //cout << min(min(a,b) , (a+b/3));
    }
}
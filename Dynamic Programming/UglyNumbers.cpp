//DP approach 
//O(N) space ; 
//O(N) time
// print nth-ugly number

//every number is a ugly number multiple of original ugly numbers;
//Bootom-Up(tabulization approach

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
    //n = 150;
    int un[n]; //ugly numbers array;

    
    int i2, i3 , i5;
    i2 = i3 = i5 = 0;
    int n2 , n3 , n5;
    

    un[0] = 1;
    fo(i, 1 , n)
    {
         n2 = un[i2]*2;   //next multiple of 2;
         n3 = un[i3]*3;
         n5 = un[i5]*5;

        un[i] = min(n2 , min(n3, n5));

        if(min(n2 , min(n3, n5)) == n2) i2++;
        if(min(n2 , min(n3, n5)) == n3)  i3++;
        if(min(n2 , min(n3, n5)) == n5) i5++;
    }

    cout << un[n-1] << " " ;
}
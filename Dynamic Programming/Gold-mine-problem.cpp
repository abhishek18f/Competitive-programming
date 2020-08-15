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
const int MAX = 100;


int getMaxGold(int arr[][MAX],  int m , int n)
{
    fo(i , 1 , n)
        fo(j , 0 , m)
        {
            int uleft = (j == 0) ? 0 : arr[j-1][i-1];
            int lleft = (j == m-1)? 0 : arr[j+1][i-1];
            arr[j][i] += max(arr[j][i-1] , max(uleft, lleft));

        }

    int ans = 0;
    fo(i , 0 , m)
        ans = max(ans , arr[i][n-1]);
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

    int gold[MAX][MAX]= {{1, 3, 3},
                   {2, 1, 4},
                  {0, 6, 4}}; 
    int m = 3 , n = 3;
    cout << getMaxGold(gold , m , n) << endl;
    
    fo(i , 0 , m)
    {
        fo(j , 0 , n)
        {
            cout << gold[i][j] << " ";
        }
        cout << "\n";
    }

}
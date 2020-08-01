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

    // char txt[] = "ABABDABACDABABCABAB"; 
    // char pat[] = "ABABCABAB"; 

    // //  char txt[] = "GEEKS FOR GEEKS";  
    // //  char pat[] = "GEEK";  
    // vector<bool> v = SieveOfEratosthenes(19);
    // fo(i , 0 , v.size()) if(v[i]) cout << i << " ";

    int freq[] = {2, 1, 1, 3, 2, 3, 4, 5, 6, 7, 8, 9}; 
    int n = sizeof(freq)/sizeof(freq[0]); 
    int *BITree = constructBIT(freq, n); 
    cout << "Sum of elements in arr[0..5] is "
        << getSum(BITree, 5); 
  
    // Let use test the update operation 
    freq[3] += 6; 
    updateBIT(BITree, n, 6, 3); //Update BIT for above change in arr[] 
  
    cout << "\nSum of elements in arr[0..5] after update is "
        << getSum(BITree, 5); 
  
    
}
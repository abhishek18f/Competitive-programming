#include <bits/stdc++.h>
using namespace std;

#define vi vector<int>
#define watch(x) cout << (#x) << " is " << (x) << endl 
#define PI 3.14
#define ll long long
#define fo(i, a, b) for (int i = a; i < b; i++)
#define foi(i, a, b) for (int i = b - 1; i >= a; i--)
#define vl vector<ll>
#define vi vector<int>
#define vll vector<pair<ll, ll>>
#define vii vector<pair<int, int>>  


vector<int> SieveOfEratosthenes(int n)
{
    bool prime[n+1];
    memset(prime , true , sizeof(prime));

    for (int p = 2; p*p < n+1; p++)
    {   
        for (int j = p*p; j <= n; j += p)
        {
            prime[j] = false;
        }
        
    }

    vector<int> ans;
    for(int i = 2 ; i<n+1 ; i++)
    {
        if(prime[i]) ans.push_back(i);
    }
    return ans;
    
    
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    vi a1;
    vi a2; 

    while(t--)
    {
        int n;
        vi primes = SieveOfEratosthenes(n);
        vi factors;

        fo(i , 0 , primes.size() )
        {
            if(n%primes[i] ==0) factors.push_back(primes[i]); 
        }

        if(factors.size() > 1 ) {i/o plugin for vs code
            a1.push_back(factors[0]);
            a2.push_back(n/factors[0]);
        }
        else
        {
            a1.push_back(-1);
            a2.push_back(-1);
        }

    }
    fo(i , 0 , a1.size()) {
        cout << [i] << " "
    }
     cout << endl;

    // fo(i , 0 , a1.size()) {
    //     cout << a1[i] << " ";
    //     cout << endl;
    //     cout << a2[i] << " ";
    // }

    
}
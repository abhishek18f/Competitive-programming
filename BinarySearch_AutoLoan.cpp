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
int gcd(int a, int b) {if (a == 0 || b == 0) return max(a,b); if (b % a == 0) return a; return gcd(b%a, a);}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
#endif

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    double price , monthlyPayment;
    int loanTerm;
    cin >> price >> monthlyPayment >> loanTerm;
    //cout << (price) << "\n";
    double interest = loanTerm*monthlyPayment - price;
    double l = 0 , u = 100;
    while(l<u)
    {
        double currentInterest = 0;
        double x = (l+u)/2;
        for(int i =0 ; i< loanTerm ; i++)
        {
            currentInterest = (price*x)/100;
            price += currentInterest;
            price -= monthlyPayment;
            //cout << price << "\n";
        }
        double error = currentInterest - interest;

        if(abs(error) < 1e-9) break;
        if(error>= 1e-9) u=x;
        else l = x;
    }
    cout << 12*l;

}
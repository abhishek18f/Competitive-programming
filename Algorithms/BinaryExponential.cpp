//for calculating a^n;

//Naive approach
//O(n)

//int ans =1;
//for(int i = 0 ; i < n ; i++) ans *a;
//return ans;


//BINARY EXPONENTIAL
//O(log(n))
//recursive approach
long long binpow(long long a , long long n)
{
    if(n == 0) return 1;
    long long res = binpow(a , n/2);
    if( n & 1 ) res *= res * a;
    return res*res; 
}

//iterative approach
long long binpow(long long a , long long n)
{
    long long res = 1;
    while(n >0)
    {
        if(b & 1 )
            res = res * a;
        
        a = a*a;
        b >>= 1; //b /=2
    }
    return res;
}



//for calculating x^n mod m
// (a⋅b≡(amodm)⋅(bmodm)(modm))
long long binpow(long long a , long long n ,long long m)
{
    a  %= m;
    long long res = 1;
    while(n >0)
    {
        if(b & 1 )
            res = res * a;
        
        a = a*a % m;
        b >>= 1; //b /=2
    }
    return res;
}

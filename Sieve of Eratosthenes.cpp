// returns all primes <= n

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
    return  ans;
    
    
}
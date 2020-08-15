// returns boolean vector all primes <= n

vector<bool> SieveOfEratosthenes(int n)
{
    vector<bool> prime(n+1 , true);
    //memset(prime , true , sizeof(prime));
    prime[0] = false;
    prime[1] = false;

    for(int  i = 2 ; i < sqrt(n+1) ; i++)
    {
        if(prime[i])
        {
            for(int j = i*i ; j <n+1 ; j+=i)
                prime[j] = false;
        }
    }   
    return prime;
}

vector<int> Solution::sieve(int A) {
    int n = A;
    vector<bool> sieve(n+1 , true);
    sieve[0] = sieve[1] = false;
    for(int i = 2 ; i<= sqrt(A) ; ++i)
        if(sieve[i])
            for(int j = i*i ; j<n+1 ; j+=i)
                sieve[j] = false;
                
    vector<int> primes;
    for(int i =0 ; i <n+1 ; ++i)
        if(sieve[i])
            primes.push_back(i);
            
    return primes;
}
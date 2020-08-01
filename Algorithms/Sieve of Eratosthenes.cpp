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
//return 1 if A is prime else 0;
//O(sqrt(A)) time complexity
int Solution::isPrime(int A) {
    if(A==2) return 1;
    for(int i = 2 ; i <= sqrt(A) ; ++i) 
        if(A%i == 0) return 0;
    return 1; 
}
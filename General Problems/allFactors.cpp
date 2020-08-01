//Print all factors of a natural number in sorted order
//O(sqrt(n)) time

vector<int> Solution::allFactors(int A) {
    vector<int> factors;
    vector<int> factor_pair;
    //for(int i  = 1 ; i <= A ; ++i) if(A%i == 0 ) factors.push_back(i);
    for(int i  = 1 ; i <= sqrt(A) ; ++i)
        if(A%i == 0)
            if(i == A/i) factors.push_back(i);
            else
            {
                factors.push_back(i);
                factor_pair.insert(factor_pair.begin() , A/i);
            }
    factors.insert(factors.end() , factor_pair.begin() , factor_pair.end());
    return factors;
}

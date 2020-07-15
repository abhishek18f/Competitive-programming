class Solution {
public:
   
    
    
    int nthUglyNumber(int n, int A, int B, int C) {
        long a = (long)A;   long b = (long)B ; long c = (long)C;
        long ab = a*b/__gcd(a,b);
        long bc = b*c/__gcd(b,c);
        long ac = a*c/__gcd(a,c);
        long abc = a*bc/__gcd(a,bc);
        
        long l = 2,  u =2*1e9;
        while(l<u)
        {
            long mid = (l+u)/2;
            long divisors = mid/a +mid/b + mid/c -mid/ab -mid/bc - mid/ac + mid/abc;
            
            
            if(divisors>=n) u = mid;
            else l = mid+1;
        }
        return l;
        
    }
};
//using upper bound
class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int ans =0;
        for(auto x:grid)
        {
            auto y = upper_bound(x.rbegin() , x.rend() , -1);
            ans += y- x.rbegin();
        }
        return ans;
    }
};

//using binary search
class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int ans =0;
        for(auto x:grid)
        {
            int n = x.size();
            int k = -1;
            for(int i = n ; i>=1 ; i/=2)
            {
                while(k+i < n && x[k+i]>=0 ) k+=i;
            }
            ans += (n-1 - k);
         }
        return ans;
    }
};
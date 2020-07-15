/*
 * // This is the custom function interface.
 * // You should not implement it, or speculate about its implementation
 * class CustomFunction {
 * public:
 *     // Returns f(x, y) for any given positive integers x and y.
 *     // Note that f(x, y) is increasing with respect to both x and y.
 *     // i.e. f(x, y) < f(x + 1, y), f(x, y) < f(x, y + 1)
 *     int f(int x, int y);
 * };
 */

// Linear solution 
// T = O(X + Y)
class Solution {
public:
    vector<vector<int>> findSolution(CustomFunction& customfunction, int z) {
        vector<vector<int>> sol;
        int x= 1;
        int y = 1000;
        while(x<=1000 && y>0)
        {
            int ans = customfunction.f(x,y);
            if(ans <z) x++;
            else if(ans>z) y--;
            else{
                vector<int> temp = {x,y};
                sol.push_back(temp);
                x++;
            }
        }
        return sol;
    }
};

//Binary Search
//T = O(XlogY)
class Solution {
public:
    vector<vector<int>> findSolution(CustomFunction& customfunction, int z) {
        vector<vector<int>> sol;

        for(int x = 1 ; x<=1000 ; x++)
        {
            int l = 1;
            int u = 1000;
            while(l<u)
            {
                int mid = (l+u)/2;
                int ans  = customfunction.f(x,mid);
                if(ans<z) l = mid+1;
                else u = mid;

               
            }
             if(customfunction.f(x,l) == z)
                {
                    vector<int> temp = {x,l};
                    sol.push_back(temp);
                    
                }
        }
       
        return sol;
    }
};
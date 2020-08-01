
//Bucketing
//O(n) time
//O(n) space
//Given an unsorted array, find the maximum difference between the successive elements in its sorted form.
//Try to solve it in linear time/space.

// Example :

// Input : [1, 10, 5]
// Output : 5 


int Solution::maximumGap(const vector<int> &A) {
    int n = A.size();
    int maxE = *max_element(A.begin() , A.end());
    int minE = *min_element(A.begin() , A.end());
    
    float delta = (float)(maxE - minE)/(float)(n - 1);
    vector<int> maxV(n-1 , INT_MIN);
    vector<int> minV(n-1 , INT_MAX);
    
    for(int i = 0 ; i < n ; ++i)
    {
        if(A[i] == maxE || A[i] == minE) continue;
        
        //finding index of bucket
        int index = (int)((A[i] - minE)/delta);
        
        //filing/updating maxV array
        // if(maxV[index] == INT_MIN) maxV[index] = A[i];
        // else
        maxV[index] = max(maxV[index] , A[i]);
        
        //filling/updating minV array
        minV[index] = min(minV[index] , A[i]);
        
    }
    
        int prev = minE;
        int max_space = 0;
        for(int i = 0 ; i < n-1 ; ++i)
        {
            if(minV[i] == INT_MAX) continue;
            max_space = max(max_space , minV[i] - prev);
            prev = maxV[i];
        }
        max_space = max(max_space , maxE - prev);
    
    
    return max_space;
}

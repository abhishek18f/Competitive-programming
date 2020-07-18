class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int H) {
        int l = 1 , u = 2*1e9;
        
        while(l<u)
        {
            int req = 0;
            int mid = (l+u)/2;
            for(int i = 0 ; i< piles.size() ; i++)
            {
                req += ((piles[i] - 1)/mid + 1);        //ceil funtion
                //req += ceil(piles[i]/mid);
            }
            
            if(req<=H) u = mid;
            else l= mid+1;
        }
        return l;
    }
};
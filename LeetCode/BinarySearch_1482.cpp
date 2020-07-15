class Solution {
public:
    int minDays(vector<int>& bloomDay, int m, int k) {
        if(m*k > bloomDay.size()) return -1;
        int n = bloomDay.size();
        int l = 1;
        int u = 1e9;
        
        while(l<u)
        {
            int mid = (u+l)/2;
            int req = 0;
            int temp =0 ;
            bool flag = 0;
            for(int i = 0 ; i<n ; i++)
                if(bloomDay[i] <=mid)
            {
                if(!flag) {temp = 1; flag = 1;}
                    else temp++;
                    if(temp>=k)
                    {
                        flag = 0;
                        req++;
                    }
            }
            else {flag = 0; temp = 0;}
            
            if(req>=m) u = mid;
            else l = mid+1;
            
        }
        return l;
        
    }
};
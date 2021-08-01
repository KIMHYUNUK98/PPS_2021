class Solution {
public:
    int subsetXORSum(vector<int>& nums) {
        
        int i,cxor,n=nums.size(),j,s=0;
        for(i=0;i<(1<<n);i++)
        {
            cxor=0;
            for(j=0;j<n;j++)
            {
                if((i>>j)&1)
                {
                    cxor=(cxor^nums[j]);                    
                }
            }
            s+=cxor;
        }
        return s;
        
    }
};
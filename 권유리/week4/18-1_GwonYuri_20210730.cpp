class Solution {
public:
    vector<int> countBits(int num) {
        vector<int> ans;
        ans.push_back(0);

        int temp;
        for(int i=1;i<=num;i++){
            if(i%2==0) temp = ans[i/2];
            else temp = ans[i/2]+1;
    
            ans.push_back(temp);
        }
        return ans;
    }
};
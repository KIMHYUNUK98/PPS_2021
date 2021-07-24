class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& A) {
        int even=0,odd=1;
        vector<int> result(A.size(),0);
        for(auto num:A){
            if (num%2){
                result[odd]=num;
                odd+=2;
            }
            else{
                result[even]=num;
                even+=2;
            }
        }
        return result;
    }
};
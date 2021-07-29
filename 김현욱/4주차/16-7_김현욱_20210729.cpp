/*
class Solution {
public:
    int maxUncrossedLines(vector<int>& nums1, vector<int>& nums2) {
        int count = 0;
        int index = -1;
        vector<int>::iterator iter = nums1.begin();
        
        while(iter != nums1.end()) {
            for(int j = 0 ; j < nums2.size() ; j++) 
            {
                if(*iter == nums2[j] && j > index) {
                    count++;
                    index = j;
                    break;
                }  
            }
            cout << *iter << " ";
            cout << nums2[index] <<endl;
            iter++;
        }
        
        return count;
    }
};
*/
// dp가 무슨 배열인지 모르겟다.
// 

class Solution {
public:
    int maxUncrossedLines(vector<int>& A, vector<int>& B) {
        int m=A.size(), n=B.size();
        vector<vector<int>> dp(m+1,vector<int>(n+1,0));
        
        for(int i=1;i<=m;i++){
            for(int j=1;j<=n;j++){
                if(A[i-1]==B[j-1]) dp[i][j] = dp[i-1][j-1]+1;
                else dp[i][j] = max(dp[i-1][j],dp[i][j-1]);
            }
        }
        return dp[m][n];
    }
};

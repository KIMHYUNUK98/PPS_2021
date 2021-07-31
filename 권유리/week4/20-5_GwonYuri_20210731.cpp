class Solution {
public:
    int firstUniqChar(string s) {
        int n=s.size();
        int arr[26]={0};

        for(int i=0;i<n;i++){
            arr[(int)(s[i]-'a')]++;
        }
        
        for(int i=0;i<n;i++){
            if(arr[(int)(s[i]-'a')]==1){
                return i;
            }
        }
        return -1;
    }
};
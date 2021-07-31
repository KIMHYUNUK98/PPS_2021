class Solution {
public:
    int romanToInt(string s) {
        int res = 0;
        map <char,int> arr;
        arr['I'] = 1;
        arr['V'] = 5;
        arr['X'] = 10;
        arr['L'] = 50;
        arr['C'] = 100;
        arr['D'] = 500;
        arr['M'] = 1000;
        for (int i = 0; i < s.length(); i++){
            if (i+1 == s.length() || arr[s[i+1]] <= arr[s[i]]){
                res += arr[s[i]];
            }
            else {
                res -= arr[s[i]];
            }
        }
        return res;
    }
};
// 모든 알파벳에 대한 count를 해주기 위한 배열을 하나 만들어준다
// 해당 알파벳이 읽힐 때마다 해당 알파벳 순서의 배열에 count를 해주고
// 다시 anagram단어를 처음부터 읽으면서 count 한것을 지워준다.
// 만약 단어가 동일하다면 배열의 모든 숫자가 0이므로 return true를 하면 될 것이다.

class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<int> arr(26, 0);
        
        for(int i = 0 ; i < s.size() ; i++) {
            arr[s[i] - 'a']++;
        }
        
        for(int i = 0 ; i < t.size() ; i++) {
            arr[t[i] - 'a']--;
        }
        
        for(int i = 0 ; i < 26 ; i++) {
            if(arr[i] != 0) return false;
        }
        return true;
        
    }
};
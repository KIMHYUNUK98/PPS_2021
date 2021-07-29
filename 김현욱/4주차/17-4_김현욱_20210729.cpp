// ��� ���ĺ��� ���� count�� ���ֱ� ���� �迭�� �ϳ� ������ش�
// �ش� ���ĺ��� ���� ������ �ش� ���ĺ� ������ �迭�� count�� ���ְ�
// �ٽ� anagram�ܾ ó������ �����鼭 count �Ѱ��� �����ش�.
// ���� �ܾ �����ϴٸ� �迭�� ��� ���ڰ� 0�̹Ƿ� return true�� �ϸ� �� ���̴�.

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
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.empty()) {
            return "";
        }
        // 첫 번째 단어 길이 만큼 반복한다.
        for (int i = 0; i < strs[0].length(); ++i) {
            // strs에 담긴 배열의 개수만큼 반복한다.
            for (const auto& str : strs) {
                if (i >= str.length() || str[i] != strs[0][i]) {
                    return strs[0].substr(0, i);
                }
            }
        }
        return strs[0];
    }
};
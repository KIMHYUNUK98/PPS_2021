class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.empty()) {
            return "";
        }
        // ù ��° �ܾ� ���� ��ŭ �ݺ��Ѵ�.
        for (int i = 0; i < strs[0].length(); ++i) {
            // strs�� ��� �迭�� ������ŭ �ݺ��Ѵ�.
            for (const auto& str : strs) {
                if (i >= str.length() || str[i] != strs[0][i]) {
                    return strs[0].substr(0, i);
                }
            }
        }
        return strs[0];
    }
};
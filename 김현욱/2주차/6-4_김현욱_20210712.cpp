// �迭�� �ϳ� ������ְ� ù index�� ������ index�� ���ʴ�� ��.
// vector -> push_back �� size ����

class Solution {
public:
    
    bool isPalindrome(ListNode* head) {
        vector<int> v;
        
        for(ListNode* list = head; list != NULL ; list = list->next) {
            v.push_back(list->val);
        }
        
        // v �迭�� �պκ� ���ݰ� �޺κ� ������ ���Ѵ�.
        for(int i = 0; i < v.size()/2 ; i++) {
            if(v[i] != v[v.size()-1-i]) return false;
        }
        
        return true;
    }
};
// 배열을 하나 만들어주고 첫 index와 마지막 index를 차례대로 비교.
// vector -> push_back 과 size 연습

class Solution {
public:
    
    bool isPalindrome(ListNode* head) {
        vector<int> v;
        
        for(ListNode* list = head; list != NULL ; list = list->next) {
            v.push_back(list->val);
        }
        
        // v 배열의 앞부분 절반과 뒷부분 절반을 비교한다.
        for(int i = 0; i < v.size()/2 ; i++) {
            if(v[i] != v[v.size()-1-i]) return false;
        }
        
        return true;
    }
};
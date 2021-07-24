class Solution {
public:
    ListNode* middleNode(ListNode* head) {
		vector<ListNode*> vec(100);
        int cur = 0;
        while (head) {
            vec[cur++] = head;
            head = head->next;
        }
        return vec[cur / 2];
    }
};
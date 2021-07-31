class Solution {
public:
    bool hasCycle(ListNode *head) {
        ListNode* ptr = head;
        while(ptr){
            if(ptr->val == NULL)
                return true;
				
            ptr->val=NULL;
            ptr=ptr->next;
        }
        return false;
    }
};
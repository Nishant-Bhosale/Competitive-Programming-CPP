/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        if(head == NULL || head->next == NULL){
            return false;
        }
        
        map<ListNode*, int> mp;
        ListNode* temp = head;
        while(temp){
            if(mp.count(temp)) return true;
            mp[temp] = temp->val;
            if(temp->next == NULL){
                return false;
            }
            temp = temp->next;
        }
        
        return false;
    }
};
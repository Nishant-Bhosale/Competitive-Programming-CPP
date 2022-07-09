/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    void reorderList(ListNode* head) {
        stack<ListNode*> st;
        ListNode* temp = head;
        
        while(temp != NULL){
            st.push(temp);
            temp = temp->next;
        }
        
        int i = 0, sz = st.size();
        ListNode* cop = head;
        while(i < sz / 2){
            ListNode* t = st.top();
            st.pop();
            t->next = cop->next;
            cop->next = t;
            cop = cop->next->next;
            i++;
        }
        cop->next = NULL;
    }
};
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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(head->next == NULL || head == NULL) return NULL;
        
        int sz = 0;
        ListNode* temp = head;
        while(temp != NULL){
            sz++;
            temp = temp->next;
        }
        
        if(sz == n){
           ListNode* tmp = head->next;
            head = tmp;
            return head;
        }
        
        int val = sz - n - 1;
        ListNode* cur = head;
        while(val){
            val--;
            cur = cur->next;
        }
        
        ListNode* tmp = cur->next->next;
        cur->next = tmp;
        return head;
    }
};
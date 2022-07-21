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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        
        ListNode newHead(0);
        newHead.next = head;
        ListNode *pre = &newHead, *cur = head, *next = NULL;
        
        int c = 1;
        while(c < right){
            if(c < left){
                pre = cur;
                cur = cur->next;
            }else{
                next = cur->next;
                cur->next = cur->next->next;
                next->next = pre->next;
                pre->next = next;
            }
            c++;
        }
        
        return newHead.next;
    }
};
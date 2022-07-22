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
    ListNode* partition(ListNode* head, int x) {
        ListNode smallerLL, biggerLL;
        ListNode *s1 = &smallerLL, *l1 = &biggerLL;
        
        ListNode* temp = head;
        while(temp != NULL){
            if(temp->val < x){
                s1 = s1->next = temp;
            }else{
                l1 = l1->next = temp;
            }
            temp = temp->next;
        }
        
        // while(smallerLL != NULL){
        //     cout<<smallerLL->val<<endl;
        //     smallerLL = smallerLL->next;
        // }
        
        l1->next = NULL;
        s1->next = biggerLL.next;
        
        return smallerLL.next;
        
    }
};
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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* num1 = l1;
        ListNode* num2 = l2;
        
        ListNode a(0), *ans=&a;
        int carry = 0;
        while(num1 != NULL || num2 != NULL || carry){
            int sum = (num1 ? num1->val : 0) + (num2 ? num2->val : 0) + carry;
            ListNode* temp;
            carry = sum / 10; 
            if(sum <= 9){
                temp = new ListNode(sum);
            }else{
                temp = new ListNode(sum % 10);
            }
            
            ans->next = temp;
            ans = ans->next;
            num1 = (num1 ? num1->next : num1);
            num2 = (num2 ? num2->next : num2);
        }
        
        return a.next;
    }
};
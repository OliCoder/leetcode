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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) 
    {
        ListNode *ptr1 = l1;
        ListNode *ptr2 = l2;
        int carry = 0,x,y;
        ListNode *ans = new ListNode(0);
        ListNode *p = ans;
        while(ptr1||ptr2)
        {
            x = ptr1 ? ptr1->val : 0;
            y = ptr2 ? ptr2->val : 0;
            p->next = new ListNode((x+y+carry)%10);
            carry = (x+y+carry)/10;
            p = p->next;
            if(ptr1) ptr1 = ptr1->next;
            if(ptr2) ptr2 = ptr2->next;
        }
        if(carry) p->next = new ListNode(1);
        return ans->next;
    }
};

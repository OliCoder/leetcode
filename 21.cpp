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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode *Res = new ListNode(0);
        ListNode *ptr=Res;
        int x, y, tmp;
        while(l1||l2)
        {
            x = l1 == NULL? 0xffff : l1->val;
            y = l2 == NULL? 0xffff : l2->val;
            tmp = min(x, y);
            if(tmp == 0xffff)return Res->next;
            ptr->next = new ListNode(tmp);
            ptr = ptr->next;
            tmp == x ? (l1 = l1->next) : (l2 = l2->next);
        }
        return Res->next;
    }
};
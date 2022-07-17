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
        if (head == NULL)
        {
            return false;
        }
        ListNode* fa = head->next;
        ListNode* sl = head;
        while (fa != NULL && sl != NULL)
        {
            if (fa == sl)
            {
                return true;
            }
            else
            fa = fa->next;
            if (fa == NULL)
            {
                return false;
            }
            fa = fa->next;
            sl = sl->next;
        }
        return false;
    }//¾­µäÌâÄ¿
};

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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* p = list1, *q = list2, *r = NULL, *list = NULL, *t = NULL;
        while (p != NULL && q != NULL)
        {
            if (p->val < q->val)
            {
                r = p;
                p = p->next;
            }
            else
            {
                r = q;
                q = q->next;
            }
            r->next = NULL;
            if (list == NULL)
            {
                list = r;
                t = list;
            }
            else
            {
                t->next = r;
                t = t->next;
            }
            
        }
        if (p != NULL)
        {
            if (list != NULL)
            {
                t->next = p;
            }
            else
            {
                list = p;
            }
        }
        else
        {
            if (list != NULL)
            {
                t->next = q;
            }
            else
            {
                list = q;
            }
        }
        return list;
    }
};

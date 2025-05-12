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
        ListNode* dum=NULL;
        if(list1 == NULL)
        {
            return list2;
        }
        if(list2 == NULL)
        {
            return list1;
        }
        if(list1->val <= list2->val)
        {
            dum = list1;
            list1 = list1->next;
        }
        else if(list2->val < list1->val)
        {
            dum = list2;
            list2 = list2->next;
        }

        ListNode* a = dum;
        
        if(list1 != NULL && list2 != NULL)
        {
            while(list1!=NULL && list2!=NULL)
            {
                if(list1->val <= list2->val)
                {
                    dum->next = list1;
                    list1 = list1->next;
                }
                else if(list2->val < list1->val)
                {
                    dum->next = list2;
                    list2 = list2->next;
                }

                dum=dum->next;
            }
        }

        if(list1 == NULL && list2 != NULL)
        {
            dum->next = list2;
        }
        else if(list2 == NULL && list1 != NULL)
        {
            dum->next = list1;
        }

        return a;
    }
};
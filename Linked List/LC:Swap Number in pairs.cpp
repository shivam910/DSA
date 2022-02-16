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

    ListNode* swapPairs(ListNode* head) 

    {

        if(!head || !head->next)

            return head;

        ListNode *first= head, *second= head->next, *prev=NULL;

        head=second;

        

        while(first && second)

        { 

            ListNode *temp= second->next;

            first->next= temp;

            second->next= first;

            if(prev)

            prev->next=second;

            prev=first;

            first=temp;                

            if(first)

                second=first->next;

            else

                second=NULL;

        }

        return head;

    }

};

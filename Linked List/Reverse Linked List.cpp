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
    // ListNode* reverseList(ListNode* head) {
    //     ListNode* prev=NULL;
    //     ListNode* start=head;
    //     ListNode* node=head;
    //     while(node!=NULL)
    //     {
    //         start=node->next;
    //         node->next=prev;
    //         prev=node;
    //         node=start;
    //     }
    //     return prev;
    ListNode* reverseList(ListNode* head) {
        ListNode* prev = NULL;
        ListNode* start = head;
        ListNode* node = head;
        while( node!= NULL )
        {
            start = node -> next;
            node -> next = prev;
            prev = node;
            node = start;
        }
        return prev;
    }
};

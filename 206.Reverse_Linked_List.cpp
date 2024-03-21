// # 206. Problem Statement: Reverse Linked List
//                           Given the head of a singly linked list, reverse the list, and return the reversed list.


class Solution {
public:
    ListNode* reverseList(ListNode* head) {

        ListNode* prev=NULL;
        ListNode* cur=head;

        while(cur != NULL){
            ListNode* forward=cur->next;

            cur->next=prev;
            prev= cur;
            cur=forward;
        }
        head=prev;
        return head;
    }
};

/** ## Problem Statement: Given the head of a singly linked list, return the middle node of the linked list.
 *                        If there are two middle nodes, return the second middle node.
 */                         

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
    ListNode* middleNode(ListNode* head) {
        if(head == NULL)
        return head;

        ListNode* temp = head;

        int count=0;

        while(temp != NULL){
            count++;
            temp = temp->next;
        }
        
        int mid = count/2;
        temp = head;
        for(int i=0;i<mid;i++){
            temp = temp->next;
        }

        return temp;
    }
};

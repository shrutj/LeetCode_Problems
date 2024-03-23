// # 143. Problem Statement: Reorder List
//                           You are given the head of a singly linked-list. The list can be represented as:
                          
//                           L0 → L1 → … → Ln - 1 → Ln
//                           Reorder the list to be on the following form:
                          
//                           L0 → Ln → L1 → Ln - 1 → L2 → Ln - 2 → …
//                           You may not modify the values in the list's nodes. Only nodes themselves may be changed.


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
    void reorderList(ListNode* head) {
        vector<int> v;

        ListNode* temp = head;

        while(temp != NULL){
            v.push_back(temp->val);
            temp = temp->next;
        }

        int i=0, j=v.size()-1;

        vector<int> v2;

        while(i <= j){
            v2.push_back(v[i]);
            v2.push_back(v[j]);
            i++, j--;
        }
        temp = head;

        i=0;

        while(temp != NULL){
            temp->val = v2[i];
            temp = temp->next;
            i++;
        }

    }
};

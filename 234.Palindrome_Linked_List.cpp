// # 234. Problem Statement: Palindrome Linked List
//                           Given the head of a singly linked list, return true if it is a palindrome or false otherwise.

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
    bool isPalindrome(ListNode* head) {
        if(head == NULL)
        return 0;

        vector<int> v;

        while(head != NULL){
            v.push_back(head->val);
            head= head->next;
        }

        for(int i=0;i<=v.size()/2;i++){
            if(v[i] != v[v.size()-1-i])
            return 0;
        }

        
        return 1;
    }
};

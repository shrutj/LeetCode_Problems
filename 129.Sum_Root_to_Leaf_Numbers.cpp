// # 129. Problem Statement: Sum Root to Leaf Numbers
//                           You are given the root of a binary tree containing digits from 0 to 9 only.
                          
//                           Each root-to-leaf path in the tree represents a number.
                          
//                           For example, the root-to-leaf path 1 -> 2 -> 3 represents the number 123.
//                           Return the total sum of all root-to-leaf numbers. Test cases are generated so that the answer will fit in a 32-bit integer.
                          
//                           A leaf node is a node with no children.


/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<int> v;
    int num=0;
    int sum=0;

    void SumNumbers(TreeNode* root){
         if(root == NULL){
            return;
        }
        num = num*10+root->val;
        if(root->left == NULL && root->right == NULL){
            v.push_back(num);
            num=(num-root->val)/10;
            return;
        }
        
        SumNumbers(root->left);
        SumNumbers(root->right);

        num=(num-root->val)/10;
        return;
    }

    int sumNumbers(TreeNode* root) {
        if(root == NULL){
            return 0;
        }
        
        SumNumbers(root);
        // cout<<v.size();
        for(int i=0;i<v.size();i++){
            sum=sum+v[i];
        }
        return sum;
    }
};

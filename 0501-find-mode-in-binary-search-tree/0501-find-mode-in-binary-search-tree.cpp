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
    vector<int> findMode(TreeNode* root) {
        unordered_map<int,int> count;
        TreeNode *curr = root;
        if (curr!= nullptr){
            count[curr->val]++;
            if (curr->right != nullptr){
                count[curr->right->val]++;
                countValues(curr->right,count);
            }
            if (curr->left != nullptr){
                count[curr->left->val]++;
                countValues(curr->left,count);
            }
        }
        vector<int> ans;
        int max_freq = 0;
        for(auto val:count){
            if (max_freq<val.second){
                max_freq = val.second;
                ans.clear();
                ans.push_back(val.first);
            } else if (max_freq==val.second){
                ans.push_back(val.first);
            }
        }
        return ans;
    }
    
    
   void countValues(TreeNode* curr,unordered_map<int,int> &count){
            if (curr->right != nullptr){
                count[curr->right->val]++;
                countValues(curr->right,count);
            }
            if (curr->left != nullptr){
                count[curr->left->val]++;
                countValues(curr->left,count);
            }
        }
};
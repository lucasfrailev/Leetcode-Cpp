/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */
class Solution {
public:
    int maxDepth(TreeNode* root) {
        if (root == nullptr) return 0;
        stack<pair<TreeNode*, int>> pile;
        TreeNode* current = root;
        TreeNode* dummy = new TreeNode();
        pile.push(make_pair(dummy, 1));
        int depth = 1, max_depth = 1;
        while (!pile.empty()) {
            if (current->left != nullptr) {
                depth += 1;
                if (current->right != nullptr) {
                    pile.push({current->right, depth});
                }
                current = current->left;
            } else if (current->right != nullptr) {
                depth += 1;
                current = current->right;
            } else {
                max_depth = max(depth, max_depth);
                pair<TreeNode*, int> last = pile.top();
                current = last.first;
                depth = last.second;
                pile.pop();
            }
        }
        return max_depth;
    }
};
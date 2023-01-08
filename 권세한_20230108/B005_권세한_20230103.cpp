class Solution {
  set<int> exist;

public:
  bool findTarget(TreeNode *root, int k) {
    if (!root)
      return false;
    if (exist.count(k - root->val))
      return true;
    exist.insert(root->val);
    return findTarget(root->left, k) || findTarget(root->right, k);
  }
};
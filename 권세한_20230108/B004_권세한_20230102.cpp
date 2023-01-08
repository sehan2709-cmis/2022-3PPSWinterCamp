class Solution {

public:
  bool checkSymmetric(TreeNode *lft, TreeNode *rgt) {
    if (lft == NULL || rgt == NULL)
      return lft == rgt;
    if (lft->val != rgt->val)
      return false;
    return (checkSymmetric(lft->left, rgt->right) &&
            checkSymmetric(lft->right, rgt->left));
  }

  bool isSymmetric(TreeNode *root) {
    if (root == NULL || (root->left == NULL && root->right == NULL))
      return true;
    if (checkSymmetric(root->left, root->right))
      return true;
    return false;
  }
};
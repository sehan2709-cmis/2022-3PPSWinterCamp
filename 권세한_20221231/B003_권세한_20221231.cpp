class Solution {
public:
  void sol(TreeNode *root, vector<int> &v, int b) {
    if (root == NULL) {
      return;
    }
    if (root->left == NULL && root->right == NULL && b == 1) {
      v.push_back(root->val);
    }

    sol(root->left, v, 1);
    sol(root->right, v, 0);
  }
  int sumOfLeftLeaves(TreeNode *root) {
    if (root->left == NULL && root->right == NULL) {
      return 0;
    }
    vector<int> v;

    sol(root, v, 1);
    int sum = 0;
    for (auto i : v) {
      sum += i;
    }
    return sum;
  }
};
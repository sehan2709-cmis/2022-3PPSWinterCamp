class Solution {
public:
  void solve(TreeNode *root, vector<int> &ans) {
    if (root == NULL) {
      return;
    }

    solve(root->left, ans);
    ans.push_back(root->val);
    solve(root->right, ans);
  }

  TreeNode *newTree(vector<int> &ans, int i, int &n) {
    if (i == n)
      return NULL;

    TreeNode *temp = new TreeNode(ans[i]);
    temp->left = NULL;
    temp->right = newTree(ans, i + 1, n);

    return temp;
  }

  TreeNode *increasingBST(TreeNode *root) {
    vector<int> ans;
    solve(root, ans);
    int n = ans.size();

    return newTree(ans, 0, n);
  }
};
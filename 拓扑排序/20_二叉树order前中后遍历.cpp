二叉树前中后遍历指的根位置
前序：根左右
中序：左根右
后序：左右根

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

递归实现：
前序：
vector<int> preOrder(LeetNode* root, vector<int>& ans){
  if(!root) return;
  ans.push_back(root->val);
  preOrder(root->left, ans);
  preOrder(root->right, ans);
}
中序：
vector<int> in(LeetNode* root, vector<int>& ans){
  if(!root) return;
  in(root->left, ans);
  ans.push_back(root->val);
  in(root->right, ans);
}
后序：
vector<int> post(LeetNode* root, vector<int>& ans){
  if(!root) return;
  post(root->left, ans);
  post(root->right, ans);
  ans.push_back(root->val);
}

栈实现：
前序：
vector<int> preOrder(LeetNode* root){
  vector<int> res;
  stack<LeetNode*> st;
  if(root) st.push(root);
  while(!st.empty()){
    auto cur = st.top(); st.pop();
    res.push_back(cur->val);
    if(cur->right) st.push(cur->right);
    if(cur->left) st.push(cur->left);
  }
  return res;
}
中序：
vector<int> inOrder(LeetNode* root){
  vector<int> res;
  stack<LeetNode*> st;
  // if(root) st.push(root);
  auto cur = root;
  while(cur || !st.empty()){
    while(cur){
      st.push(root);
      cur = cur->left;
    }
    cur = st.top(); st.pop();
    res.push_back(cur->val);
    cur = cur->right;
  }
  return res;
}
后序：
vector<int> postOrder(LeetNode* root){
  vector<int> res;
  stack<LeetNode*> st;
  if(root) st.push(root);
  while(!st.empty()){
    auto cur = st.top(); st.pop();
    res.push_back(cur->val);
    if(cur->left) st.push(cur->left);
    if(cur->right) st.push(cur->right);
  }
  reverse(res.begin(), res.end());
  return res;
}

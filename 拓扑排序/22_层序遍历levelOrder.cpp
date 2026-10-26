题意：按层输出二叉树，每一层单独放到一个 vector 里。
核心：**BFS + 分层，用 `queue`，用当前队列长度 `sz` 控制一层**

vector<vector<int>> levelOrder(LeetNode* root){
  vector<vector<int>> res;
  queue<LeetNode*> que;
  if(root) que.push(root);
  while(!que.empty()){
    int an = que.size();
    vector<int> layers;
    for(int i = 0; i < an; i++){
      auto cur = que.front(); que.pop();
      layers.push_back(cur->val);
      if(cur->left) que.push(cur->left);
      if(cur->right) que.push(cur->right);
    }
    res.push_back(layers);
  }
  return res;
}

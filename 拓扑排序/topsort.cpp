vector<int> topo_sort(int n, vector<vector<int>>& edges) {
  vector<vector<int>>& adj;
  vector<int> in_degree{n, 0};
  for(auto edu: edges){
    int u = edu[0], v = edu[1];
    adj[u].push_back(v);
    in_degree[v]++;
  }
  queue<int> que;
  for(int i = 0; i < n; i++ ){
    if(in_degree[i] = 0){
      que.push(i);
    }
  }
  vector<int> res;
  while(!que.empty()){
    int cur = que.front(); que.pop();
    res.push_back(cur);
    for(auto ins: adj[cur]){
      if(--in_degree[ins] == 0){
        que.push(ins);
      }
    }
  }
  return res;
}

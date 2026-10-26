题意：0 海水，1 陆地，求连通块数量
DFS  BFS
void dfs(vector<vector<char>>& grid, int i, int j, vector<vector<bool>>& via, int m, int n){
  if(i < 0 || i >= m || j < 0 || j >=n) return;
  if(grid[i][j] == '0' ||  via[i][j]) return;
  via[i][j] = true;
  dfs(grid, i+1, j, via, m, n);
  dfs(grid, i-1, j, via, m, n);
  dfs(grid, i, j+1, via, m, n);
  dfs(grid, i, j-1, via, m, n);
}

int numIslands(vector<vector<char>>& grid) {
  if(grid.empty()) return 0;
  int m = grid.size(), n = grid[0].size();
  vector<vector<bool>> via(m, vector<bool>(n, false));  
  int count = 0;
  for(int i = 0; i < m; i++){
    for(int j = 0; j < n; j++){
      if(grid[i][j] == '1' && !via[i][j]){
        count++;
        dfs(grid, i, j, via, m, n);
      }
    }
  }
  return count;
}

BFS
int numIslands(vector<vector<char>>& grid){
  if(grid.empty()) return 0;
  int m = grid.size(), n = grid[0].size();
  vector<vector<bool>> via(m, vecotr<bool>(n, false));
  int count = 0;
  queue<pair(int, int)> que;
  vector<int> dx = {1, -1, 0, 0};
  vector<int> dy = {0, 0, 1, -1};
  for(int i = 0; i < m; i++){
    for(int j = 0; j < n; j++){
      if(grid[i][j] == '1'){
        count++;
        que.emplace(i, j);
        grid[i][j] = '0';
        auto x = i, y = j;
        while(!que.empty()){
          for(int t = 0; t < 4; t++){
            
          }
        }
      }
    }
  }
}

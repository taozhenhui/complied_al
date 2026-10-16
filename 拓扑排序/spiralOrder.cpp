LeetCode 54 螺旋矩阵
题目
给 m 行 n 列矩阵，按顺时针螺旋顺序，返回所有元素一维数组。
示例
plaintext
输入：matrix = [[1,2,3],[4,5,6],[7,8,9]]
输出：[1,2,3,6,9,8,7,4,5]


vector<int> spiralOrder(vector<vector<int>>& matrix) {
  int top = 0, bottom = matrix.size()-1;
  int left = 0, right = matrix[0].size() -1 ;
  if(bottom == 0 || right ==0) break;
  vector<int> ans;
  while(top <= bottom && left <= right){
    for(int i = left; i < right + 1; i++){
      ans.push_back(matrix[top][i]);
    }
    top++;
    for(int j = top; j < bottom + 1; j++){
      ans.push_back(matrix[j][right]);
    }
    right--;
    if(top <= bottom){
      for(int i = right; i > left- 1; i--){
        ans.push_back(matrix[bottom][i]);
      }
      bottom--;
    }
    if(left <= right){
      for(int j = bottom; j > top- 1; j--){
        ans.push_back(matrix[j][left]);
      }
      left++;
    }
  }
  return ans;
}

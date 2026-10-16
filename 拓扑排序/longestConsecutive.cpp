给定未排序整数数组，求数字连续的最长序列长度（元素不用在原数组相邻）。
要求：O (n) 时间。
示例 1
nums = [100,4,200,1,3,2] → 输出4，序列1,2,3,4
示例 2
nums = [0,3,7,2,5,8,4,6,0,1] → 输出9
难点：排序解法是 O (n log n)，不满足题目 O (n) 硬性要求


int longestConsecutive(vector<int>& nums) {
  unordered_set<int> st(nums.begin(), nums.end());
  int max_len = 0;
  for(auto& i : st){
    if(!st.count(i-1)){
      int cur = i;
      int len = 1;
      while(st.count(cur + 1)){
        cur++;
        len++;
      }
      max_len = max(max_len, len);
    }
  }
  return max_len;
}

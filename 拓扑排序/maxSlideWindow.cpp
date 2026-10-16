题目
给数组nums、窗口大小k。窗口从左向右滑动，每次向右移动一格，返回每个窗口内的最大值。
要求最优 O (n)
示例
plaintext
nums = [1,3,-1,-3,5,3,6,7], k = 3
输出：[3,3,5,5,6,7]

vector<int> maxSlideWindow(vector<int>& nums, int k){
  int n = nums.size();
  duque<int> due;
  vector<int> res;
  for(int i = 0; i < n; i++){
    while(!due.empty() && nums[due.back()] <= nums[i]){
      due.pop_back();
    }
    due.push_back(i);
    if(due.front() <= i - k){
      due.pop_front();
    }
    if(i >= k-1){
      res.push_back(nums[due.front()]);
    }
  }
  return res;
}

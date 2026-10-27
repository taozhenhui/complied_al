# C215 数组中的第 K 个最大元素

题意：给定整数数组 `nums` 和整数 `k`，返回数组中第 `k` 个最大的元素。

> 
> 注意：第 k 大，不是第 k 小；例如 `[3,2,1,5,6,4], k=2`，排序后 `[1,2,3,4,5,6]`，第 2 大是 `5`

int kmax(vector<int>& nums, int k){
  sort(nums.begin(), nums.end());
  int ans = nums[nums.size()-k];
  return ans;
}

给定数组 `height`，每个元素代表竖板高度，下标代表横坐标。任选两个板，和 x 轴围成容器。求容器能装的最大水量。
公式：`面积 = 两板间距 × 两块板中较小的高度`
> 面积 = `(r-l) * min(height[l], height[r])`
示例：
`height = [1,8,6,2,5,4,8,3,7]`
输出：49
取 l=1 (高度 8), r=8 (高度 7)，宽度 7，min (8,7)=7 → 7*7=49

int maxArea(vector<int>& height) {
  int l = 0; int r = height.size() - 1;
  int ans = 0;
  while(l < r){
    int area = (r - l) * min(height[l], height[r]);
    ans = max(ans, area);
    if(height(l) < height(r)) l++;
    else{r--;}
  }
  return ans;
}

题意：给定只包含 `() [] {}` 的字符串，判断括号是否有效
规则：

1. 左括号必须有对应的右括号
2. 必须成对、顺序正确
3. 后开的先闭合（栈的天然特性）
bool isvaild(string s){
  stack<char> st;
  for(int i=0; i<s.size(); i++){
    if(s[i] =='(' || s[i] =='[' || s[i] =='{') st.push(s[i]);
    else{
      if(st.empty()) return false;
      char ch = st.top();
      if((s[i] == ')' && ch =='(') || (s[i] == ']' && ch =='[') || (s[i] == '}' && ch =='{')) st.pop();
      else return false;
    }
  }
  return st.empty();
}

bool isvaild(string s){
  stack<char> st;
  unorder_map<char, char> mp = {{')','('}, {']','['}, {'}','{'}};
  for(auto ch : s){
    if(mp.count(ch)){
      if(st.empty() || mp[ch] != st.top()) return false;
      st.pop();
    }
    else st.push(ch);
  }
  return st.empty();
}

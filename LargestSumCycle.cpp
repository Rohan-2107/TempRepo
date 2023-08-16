class Solution
{
  public:
  long long ans;
  void dfs(int i, long long tmpans, vector<int> &arr, int vis[], int &st, int& flag){
      if(arr[i] == -1) return;
      vis[i] = 1;
      if(!vis[arr[i]]) 
        dfs(arr[i], tmpans + arr[i], arr, vis, st, flag); 
      else if(tmpans > ans and arr[i] == st) 
        ans = tmpans, flag = 0;
      if(flag) vis[i] = 0; 
  }
  long long largestSumCycle(int N, vector<int> arr){
      ans = -1;
      int vis[N] = {0}, flag = 1;
      for(int i = 0; i < N; i++) 
        if(!vis[i]) dfs(i, i, arr, vis, i, flag), flag = 1;  
      return ans;
  }
};

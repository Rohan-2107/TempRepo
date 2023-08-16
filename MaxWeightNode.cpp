class Solution
{
  public:
  int maxWeightCell(int N, vector<int> Edge) {
        vector<int> wt(N, 0);
        int sum = 0, res = 0;

        for (int i = 0; i < N; i++) {
            if (Edge[i] != -1) {
                wt[Edge[i]] += i;
                if (sum <= wt[Edge[i]]) {
                    sum = wt[Edge[i]];
                    res = Edge[i];
                }
            }
        }

        return res;
    }
};





int solution(vector<int>arr){
    int ans=INT_MIN;
    int result=-1;
    vector<int>weight(arr.size(),0);
    for(int i=0;i<arr.size();i++){
        int source=i;
        int dest=arr[i];
        if(dest!=-1){
            weight[dest]+=source;
            if(ans<=weight[dest]){
                ans=max(ans,weight[dest]);
                result=dest;
            }
            
        }
    }
    if(ans!=INT_MIN)
        return result;
    return -1;
}

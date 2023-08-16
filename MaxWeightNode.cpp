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

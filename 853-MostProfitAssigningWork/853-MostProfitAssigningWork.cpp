// Last updated: 1/22/2026, 7:55:05 PM
class Solution {
public:
    int maxProfitAssignment(vector<int>& difficulty, vector<int>& profit, vector<int>& worker) {
        int n=profit.size();
        int m=worker.size();
        priority_queue<pair<int,int>>pq;
        for(int i=0;i<n;i++){
            pq.push({profit[i],difficulty[i]});
        }
        sort(worker.begin(),worker.end());
        int j=m-1;
        int ans=0;
        while(j>=0 && !pq.empty()){
            auto it=pq.top();
            pq.pop();
            while(j>=0 && worker[j]>=it.second){
                ans+=it.first;
                j--;
            }

        }
        return ans;

    }
};
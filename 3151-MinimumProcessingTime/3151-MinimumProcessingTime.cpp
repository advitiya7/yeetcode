// Last updated: 1/22/2026, 7:51:18 PM
class Solution {
public:
    int minProcessingTime(vector<int>& processorTime, vector<int>& tasks) {
        int n=processorTime.size();
        sort(tasks.begin(),tasks.end());
        sort(processorTime.begin(),processorTime.end(),greater<int>());
         int sum=0;
         for(int i=0;i<n;i++){
             sum=max(sum,processorTime[i]+tasks[4*i+3]);
         }
         return sum;


        
    }
};
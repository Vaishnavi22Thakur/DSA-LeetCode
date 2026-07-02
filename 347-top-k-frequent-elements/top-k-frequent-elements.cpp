class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int>ans(k);
        int n=nums.size();
        unordered_map<int,int>m;
        for(int x:nums){
            m[x]++;
        }
        priority_queue<pair<int,int>>p;
        for(auto &it:m){
            p.push({it.second,it.first});
        }
        int i=0;
        while(k--){
            ans[i]=p.top().second;
            i++;
            p.pop();
        }
        return ans;
    }
};
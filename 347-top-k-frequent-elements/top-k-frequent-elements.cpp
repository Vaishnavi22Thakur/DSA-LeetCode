class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int>ans;
        int n=nums.size();
        unordered_map<int,int>m;
        for(int x:nums){
            m[x]++;
        }
        priority_queue<pair<int,int>>p;
        for(auto &it:m){
            p.push({it.second,it.first});
        }
        while(k--){
            ans.push_back(p.top().second);
            p.pop();
        }
        return ans;
    }
};
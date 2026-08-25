class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        int n=nums.size();
        int mn=k;
        unordered_map<int,int>m;
        for(int i=0;i<n;i++){
            m[nums[i]]++;
        }
        while(m.find(mn)!=m.end()) mn+=k;
        return mn;
    }
};
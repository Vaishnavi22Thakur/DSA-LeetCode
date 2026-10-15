class Solution {
public:
    int sumCounts(vector<int>& nums) {
        unordered_set<int>s;
        int sum=0;
        int n=nums.size();
        for(int i=0;i<n;i++){
            for(int j=i;j<n;j++){
                s.insert(nums[j]);
                sum+=(s.size())*(s.size());
            }
            s.clear();
        }
        return sum;
    }
};
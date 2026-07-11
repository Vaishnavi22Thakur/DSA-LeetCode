class Solution {
public:
    vector<vector<int>>ans;
    vector<int>temp;
    void solve(vector<int>& nums,int index){
        if(index==nums.size()){
            ans.push_back(temp);
            return;
        }
        solve(nums,index+1);
        temp.push_back(nums[index]);
        solve(nums,index+1);
        temp.pop_back();
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        solve(nums,0);
        return ans;
    }
};
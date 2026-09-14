class Solution {
public:
    int maxProduct(vector<int>& nums) {
        priority_queue<int>pq;
        int n=2;
        for(int x:nums){
            pq.push(x);
        }
        int a=pq.top();
        pq.pop();
        int b=pq.top();
        pq.pop();
        return (a-1)*(b-1);

    }
};
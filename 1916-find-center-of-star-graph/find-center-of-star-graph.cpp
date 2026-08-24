class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        int n=edges.size()+1;
        vector<int>center(n+1,0);
        for(auto &e:edges){
            center[e[0]]++;
            center[e[1]]++;
        }
        for(int i=1;i<=n;i++){
            if(center[i]==n-1){
                return i;
            }
        }
        return 0;
    }
};
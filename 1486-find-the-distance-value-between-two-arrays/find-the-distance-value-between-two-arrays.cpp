class Solution {
public:
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
        int n1=arr1.size();
        int n2=arr2.size();
        int ans=0;
        int isless=1;
        for(int i=0;i<n1;i++){
            int isless=1;
            for(int j=0;j<n2;j++){
                int diff=abs(arr1[i]-arr2[j]);
                if(diff<=d) isless=0;
            }
            if(isless) ans++;
        }
        return ans;
    }
};
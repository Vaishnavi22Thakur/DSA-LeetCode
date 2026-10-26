class Solution {
public:
    long long isdivisible(vector<vector<int>>& grid,int m,int n,int k,int i,int j){
        if(i<0 || i>=m || j<0 || j>=n || grid[i][j]==0){
            return 0;
        }
        long long sum=grid[i][j];
        grid[i][j]=0;
        sum+=isdivisible(grid,m,n,k,i+1,j);
        sum+=isdivisible(grid,m,n,k,i,j+1);
        sum+=isdivisible(grid,m,n,k,i-1,j);
        sum+=isdivisible(grid,m,n,k,i,j-1);
        return sum;
    }
    int countIslands(vector<vector<int>>& grid, int k) {
        int m=grid.size();
        int n=grid[0].size();
        int count=0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]!=0){
                    long long total=isdivisible(grid,m,n,k,i,j);
                    if(total%k==0) count++;
                }
            }
        }
        return count;
    }
};
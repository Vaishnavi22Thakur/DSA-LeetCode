class Solution {
public:
    bool helper(vector<vector<char>>&board,int i,int j,int index,string& word){
        if(index==word.size()){
            return true;
        }
        if(i<0 || i>=board.size() || j<0 || j>=board[0].size()){
            return false;
        }
        if(board[i][j]!=word[index]){
            return false;
        }
        char temp=board[i][j];
        board[i][j]='#';
        bool found=helper(board,i-1,j,index+1,word) || helper(board,i+1,j,index+1,word) || helper(board,i,j-1,index+1,word) || helper(board,i,j+1,index+1,word);
        board[i][j]=temp;
        return found;
    }
    bool exist(vector<vector<char>>& board, string word) {
        int m=board.size();
        int n=board[0].size();
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(board[i][j]==word[0]){
                    if(helper(board,i,j,0,word)){
                        return true;
                    }
                }
            }
        }
        return false;
    }
};
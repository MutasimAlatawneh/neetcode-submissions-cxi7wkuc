class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        unordered_set<char>Set;
        for(int i=0;i<9;i++){
            Set.clear();
            for(int j=0;j<9;j++)
            if(Set.count(board[i][j])==1)
            return false;
            else if(board[i][j]!='.')
            Set.insert(board[i][j]);
        }
        for(int i=0;i<9;i++){
            Set.clear();
            for(int j=0;j<9;j++){
                if(Set.count(board[j][i])==1)
                return false;
                else if(board[j][i]!='.')
                Set.insert(board[j][i]);
            }
        }
        Set.clear();
        vector<pair<int,int>>v={{0,0},{0,3},{0,6},{3,0},{3,3},{3,6},{6,0},{6,3},{6,6}};
        for(auto &[a,b]:v){
            Set.clear();
            for(int i=a;i<a+3;i++){
                for(int j=b;j<b+3;j++){
                    if(Set.count(board[i][j])==1){
                        return false;
                    }
                    else if(board[i][j]!='.')
                    Set.insert(board[i][j]);
                }
            }
        }
        return true;
    }
};

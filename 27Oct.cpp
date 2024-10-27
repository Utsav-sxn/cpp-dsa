//37

bool isValidNum(int x,int y,vector<vector<char>>& board,char i){
        for(int val=0;val<9;val++){
            if(board[x][val] == i){
                return false;
            }
            if(board[val][y] == i){
                return false;
            }
            if(board[3*(x/3) + val/3][3*(y/3)+val%3] == i){
                return false;
            }
        }
        return true;
    }

    bool backTrack(vector<vector<char>>& board){
        int n = board.size();
        for(int x = 0;x<n;x++){
            for(int y = 0;y<n;y++){
                if(board[x][y] == '.'){
                    for(char i='1';i<='9';i++){
                        if(isValidNum(x,y,board,i)){
                            board[x][y] = i;
                            bool solution = backTrack(board);
                            if(solution){
                                return true;
                            }
                            else board[x][y] = '.';
                        }
                    }
                    return false;
                }
            }
        }
    return true;
    }
public:
    void solveSudoku(vector<vector<char>>& board) {
        // vector<char> choices = {' ','1','2','3','4','5','6','7','8','9'};
        //  backTrack(board,choices);
        backTrack(board);
    }


//39

void backTrack(vector<int>& candidates,vector<int> num,vector<vector<int>>& ans,int rem,int index){
        if(rem == 0){
            ans.push_back(num);
            return;
        }
        if(rem<0) return;

        for(int i=index;i<candidates.size();i++){
            num.push_back(candidates[i]);
            backTrack(candidates,num,ans,rem-candidates[i],i);
            num.pop_back();
        }
    }
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        if(candidates.size()==1 and candidates[0]>target) return ans;
        vector<int> num;
        backTrack(candidates,num,ans,target,0);
    return ans;
    }
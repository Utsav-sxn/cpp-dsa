void backTrack(vector<int>& cand,vector<vector<int>>& ans,vector<int> op,int rem,int ind){
        if(rem == 0){
            ans.push_back(op);
            return;
        }
        for(int i = ind;i<cand.size();i++){
            if(i>ind && cand[i] == cand[i-1]){
                continue;
            }
            if(cand[i]>rem){
                break;
            }
            op.push_back(cand[i]);
            backTrack(cand,ans,op,rem-cand[i],i+1);
            op.pop_back();
        }
    }
public:
    vector<vector<int>> combinationSum2(vector<int>& cand, int tg) {
        vector<vector<int>> ans;
        vector<int> op;
        int rem = tg;
        sort(cand.begin(),cand.end());
        backTrack(cand,ans,op,rem,0);
    return ans;
    }
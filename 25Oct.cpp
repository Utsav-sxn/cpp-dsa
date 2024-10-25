//506

vector<string> findRelativeRanks(vector<int>& score) {
        vector<string> v;
        if(score.size()==1){
            v.push_back("Gold Medal");
        return v;
        }
        priority_queue<int> pq;
        unordered_map<int,string> mp;
        for(int i=0;i<score.size();i++){
            pq.push(score[i]);
        }
        if(pq.size()==2){
            mp[pq.top()] = "Gold Medal";
            pq.pop();
            mp[pq.top()] = "Silver Medal";
            pq.pop();
            for(int i=0;i<score.size();i++){
            v.push_back(mp.at(score[i]));
            }
        }
        else if(pq.size()>2){
            mp[pq.top()] = "Gold Medal";
            pq.pop();
            mp[pq.top()] = "Silver Medal";
            pq.pop();
            mp[pq.top()] = "Bronze Medal";
            pq.pop();
        int rank = 4;
        while(!pq.empty()){
            mp[pq.top()] = to_string(rank++);
            pq.pop();
        }
        for(int i=0;i<score.size();i++){
            v.push_back(mp.at(score[i]));
        }
        }
    return v;
    }


//46
vector<vector<int>> str;
    void permutations(vector<int>& nums,int vis[],vector<int>& ans){
        if(ans.size()==nums.size()){
            str.push_back(ans);
            return;
        }
        else{
            for(int i=0;i<nums.size();i++){
            if(!vis[i]){
                vis[i] = 1;
                ans.push_back(nums[i]);
                permutations(nums,vis,ans);
                vis[i] = 0;
                ans.pop_back();
            }
            }
        }
    }
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<int> ans;
        int vis[6] = {0};
        permutations(nums,vis,ans);
    return str;
    }
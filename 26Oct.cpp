//17

void backTrack(vector<string>& ans,string digits,string output,int index,unordered_map<char ,string> mp){
        if(index>=digits.length()){
            if(output.length()>0){
            ans.push_back(output);
            }
            return;
        }

        char num = digits[index];
        string str = mp.at(num);
        for(int i=0;i<str.length();i++){
            output.push_back(str[i]);
            backTrack(ans,digits,output,index+1,mp);
            output.pop_back();
        }
    }
public:
    vector<string> letterCombinations(string digits) {
        unordered_map<char ,string> mp;
        vector<string> ans;
        string output = "";
        mp['0'] = " ";
        mp['1'] = " ";
        mp['2'] = "abc";
        mp['3'] = "def";
        mp['4'] = "ghi";
        mp['5'] = "jkl";
        mp['6'] = "mno";
        mp['7'] = "pqrs";
        mp['8'] = "tuv";
        mp['9'] = "wxyz";
        backTrack(ans,digits,output,0,mp);
    return ans;
    }
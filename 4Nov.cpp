//3163

string compressedString(string word) {
        if(word.length()==0) return "";
        string ans="";
        char f = word[0];
        int cnt = 1;
        for(int i=1;i<word.length();i++){
            if(word[i]==f){
                if(cnt<9){
                    cnt++;
                }
                else{
                    ans.push_back('9');
                    ans.push_back(f);
                    cnt=1;
                }
            }
            else{
                ans+=to_string(cnt);
                ans.push_back(f);
                cnt = 1;
                f=word[i];
            }
        }
        ans+=to_string(cnt);
        ans+=f;
    return ans;
    }
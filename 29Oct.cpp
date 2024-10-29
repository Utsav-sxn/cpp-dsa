//58

int lengthOfLastWord(string s) {
        string ans = "";
        int i = s.length()-1;
        for(;i>=0;i--){
            if(s[i]==' '){

            }
            else break;
        }
        for(int j = i;j>=0;j--){
            if(s[j]!=' '){
                ans+=s[j];
            }
            else break;
        }
        return ans.length();
    }
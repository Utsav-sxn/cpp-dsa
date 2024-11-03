//796

bool rotateString(string s, string goal) {
        if(s.size()!=goal.size()) return 0;
        // int i=0;
        // while(s[i]!=goal[0]){
        //     i++;
        // }
        // string ans="";
        // for(int j=i;j<s.size();j++){
        //     ans+=s[j];
        // }
        // for(int j=0;j<i;j++){
        //     ans+=s[j];
        // }
        // if(ans.compare(goal)==0) return 1;
        s = s+s;
        size_t found = s.find(goal);
        if(found != string::npos)
            return 1;
    return 0;
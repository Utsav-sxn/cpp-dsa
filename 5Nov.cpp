// 2914

int minChanges(string s) {
        int count=0;
        if(s.size()==1) return 0;
        for(int i=1;i<s.size();i++){
            if(s[i-1]!=s[i]){
            count++;
            }
            i++;
        }
    return count;
    }
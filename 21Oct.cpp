//3110
int scoreOfString(string s) {
        if(s.size()==0){
            return 0;
        }
        if(s.size()==1){
            return (int) s[0];
        }
        int sum = 0;
        for(int i=1;i<s.size();i++){
            sum+= abs((int) s[i-1] - (int) s[i]);
        }
    return sum;
    }
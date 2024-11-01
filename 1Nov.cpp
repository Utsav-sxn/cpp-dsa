//1957

string makeFancyString(string s) {
        string ans="";
        ans+=s[0];
        int occ = 1;
        for(int i=1;i<s.size();i++){
            if(s[i]==ans.back()){
                occ++;
                if(occ<3){
                    ans+=s[i];
                }
            }
            else{
                ans+=s[i];
                occ=1;
            }
        }
    return ans;
    }
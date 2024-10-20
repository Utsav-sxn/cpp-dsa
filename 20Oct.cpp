//1106
int eval(char op,vector<int> operands){
        int ans = operands[0];
        if(op == '|'){
            for(int i=1;i<operands.size();i++){
                ans = ans | operands[i];
            }
            cout<<"|ans "<<ans<<endl;
        }
        if(op == '&'){
            for(int i=1;i<operands.size();i++){
                ans = ans & operands[i];
            }
            cout<<"&ans "<<ans<<endl;
        }
        return ans;
    }
public:
    bool parseBoolExpr(string expression) {
        unordered_map<char,int> mp1;
        unordered_map<int,char> mp2;
        mp1['f'] = 0;
        mp1['t'] = 1;
        mp2[0] = 'f';
        mp2[1] = 't';
        stack<char> st;
        vector<int> stp;
        for(int i=0;i<expression.size();i++){
            if(expression[i] == ')'){
                while(st.top()!='('){
                    if(st.top()!=','){
                        cout<<"top "<<mp1.at(st.top())<<endl;
                        stp.push_back(mp1.at(st.top()));
                    }
                    st.pop();
                }
                st.pop(); // for '('
                char op = st.top();
                cout<<"op"<<op<<endl;
                st.pop();
                if(op == '!'){
                    cout<<"~stp"<<stp[0]<<endl;
                    if(stp[0]==1){
                        stp[0] = 0;
                    }
                    else{
                        stp[0] = 1;
                    }
                    st.push(mp2.at(stp[0]));
                    stp.clear();
                }
                else{
                    int ans = eval(op,stp);
                    cout<<"stans "<<ans<<endl;
                    st.push(mp2.at(ans));
                    stp.clear();
                }
            }
            else{
                st.push(expression[i]);
            }
        }
        cout<<st.top()<<endl;
    return mp1.at(st.top());
    }

//1021
string removeOuterParentheses(string s) {
        string ans = "";
        int paren = 0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='('){
                if(paren!=0){
                    ans+=s[i];
                }
                paren++;
            }
            else{
                paren--;
                if(paren!=0){
                ans+=s[i];
            }
            }
        }
        return ans;
    }

//1903
string largestOddNumber(string num) {
        while(!empty(num) && (num.back()-'0')%2 == 0){
            num.pop_back();
        }
        return num;
    }
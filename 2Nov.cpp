//2490

bool isCircularSentence(string sentence) {
        int size = sentence.size()-1;
        if(sentence[size] != sentence[0]) return false;
        int flag = 0;
        for(int i=0;i<=size;i++){
            if(sentence[i]==' '){
                flag++;
            }
        }
        if(flag==0 && sentence[size]==sentence[0]) return true;
        int sep_idx = -1;
        for(int i=0;i<size;i++){
            if(sentence[i]==' '){
                sep_idx = i;
            }
            if(sep_idx-1>=0 && sep_idx+1<=size){
                if(sentence[sep_idx-1]!=sentence[sep_idx+1])
                    return false;
            }
            if(sep_idx-1>=0 && sep_idx+1>size){
                if(sentence[sep_idx-1]!=sentence[0])
                    return false;
            }
        }
    return true;
    }
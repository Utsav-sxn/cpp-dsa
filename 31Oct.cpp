//2

ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        queue<int> st1,st2;
        ListNode* temp1 = l1;
        ListNode* temp2 = l2;
        while(temp1!=NULL){
            st1.push(temp1->val);
            temp1=temp1->next;
        }
        while(temp2!=NULL){
            st2.push(temp2->val);
            temp2=temp2->next;
        }
        string result = "";
        while(!st1.empty() && !st2.empty()){
            int a = st1.front();
            st1.pop();
            int b = st2.front();
            st2.pop();
            if(a+b>=10){
                result+= to_string((a+b)%10);
                if(st1.empty() && st2.empty()) result+=to_string(1);
                if(!st1.empty())
                    st1.front()+=1;
                else
                    st2.front()+=1;
            }
            else{
                result+= to_string(a+b);
            }
        }
        while(!st1.empty()){
            int a;
            if(st1.front()>9){
                a = st1.front()%10;
                st1.pop();
                st1.front()+=1;
                result+= to_string(a);
                if(st1.empty()) result+=to_string(1);
            }
            else{
                a = st1.front();
                st1.pop();
                result+=to_string(a);
            }
        }
        while(!st2.empty()){
            int a;
            if(st2.front()>9){
                a = st2.front()%10;
                st2.pop();
                st2.front()+=1;
                result+= to_string(a);
                if(st2.empty()) result+=to_string(1);
            }
            else{
                a = st2.front();
                st2.pop();
                result+=to_string(a);
            }
        }
        ListNode* head = NULL;
        for(auto i:result){
            temp1 = new ListNode(i-'0');
            temp1->next=NULL;
            if(head==NULL)
            head = temp1;
            else{
                ListNode* temp = head;
                while(temp->next!=NULL){
                    temp = temp->next;
                }
                temp->next = temp1;
            }
        }
        return head;
    }


//26

int removeDuplicates(vector<int>& nums) {
        if(nums.size()==1) return 1;
    //     map<int,int> mp;
    //     vector<int> v;
    //     for(int i=0;i<nums.size();i++){
    //         mp[nums[i]] = i;
    //     }
    //     for(auto i:mp){
    //         v.push_back(i.first);
    //     }
    //     int idx = 0; 
    //     int count = 0;
    //     for(auto i:v){
    //         cout<<i<<endl;
    //         nums[idx++] = i;
    //     }
    //     count = v.size();
    // return count;
        int ptr1 = 1;
        int ptr2 = 1;
        for(;ptr1<nums.size();ptr1++){
            if(nums[ptr1]!=nums[ptr1-1]){
                nums[ptr2++] = nums[ptr1];
            }
        }
        return ptr2;
    }
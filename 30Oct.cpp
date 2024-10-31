//746

//RECURSION AND MEMOIZATION
    // int dp(vector<int>& cost,int n,vector<int>& arr){
    //     if(n==0) return cost[0];
    //     if(n==1) return cost[1];

    //     if(arr[n] != -1 ) return arr[n];

    //     arr[n] = cost[n] + min(dp(cost,n-1,arr),dp(cost,n-2,arr));
    //     return arr[n];
    // }


    //TABULATION AND DP ARRAY
    // int dp(int n, vector<int>& cost){
    //     vector<int> arr(n);
    //     arr[0] = cost[0];
    //     arr[1] = cost[1];

    //     for(int i=2;i<cost.size();i++){
    //         arr[i] = cost[i] + min(arr[i-1],arr[i-2]);
    //     }
    //     return min(arr[n-1],arr[n-2]);
    // }


    int dp(int n,vector<int>& cost){
        int curM2 = cost[0];
        int curM1 = cost[1];
        for(int i=2;i<n;i++){
            int cur = cost[i] + min(curM1,curM2);
            curM2 = curM1;
            curM1 = cur;
        }
        return min(curM1,curM2);
    }
public:
    int minCostClimbingStairs(vector<int>& cost) {
        //RECURSION AND MEMOIZATION
        // int size = cost.size();
        // vector<int> dpArr(size);
        // for(int i=0;i<dpArr.size();i++){
        //     dpArr[i] = -1;
        // }
        // return min(dp(cost,size-1,dpArr),dp(cost,size-2,dpArr));
        

        //TABULATION AND DP ARRAY
        // int n = cost.size();
        // return dp(n,cost);

        //3 VARIABLES
        int n = cost.size();
        return dp(n,cost);
    }


//27

int removeElement(vector<int>& nums, int val) {
        for(int i=0;i<nums.size();i++){
            if(nums[i]==val){
                for(int j=i;j<nums.size();j++){
                    if(nums[j]!=val){
                        swap(nums[i],nums[j]);
                        break;
                    }
                }
            }
        }
        int count=0;
        for(auto i:nums){
            if(i!=val) count++;
        }
    return count;
    }
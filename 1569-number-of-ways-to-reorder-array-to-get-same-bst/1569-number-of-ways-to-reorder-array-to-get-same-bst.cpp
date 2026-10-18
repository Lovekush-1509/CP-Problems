class Solution {

    //vid
    int mod = 1e9+7;
    vector<vector<long long>>pt;

    int solve(vector<int>arr){
        if(arr.size() < 3)return 1;

        vector<int>left,right;
        for(int i = 1; i < arr.size(); i++){
            if(arr[i] < arr[0])left.push_back(arr[i]);
            else right.push_back(arr[i]);
        }
        
        long long a = pt[arr.size()-1][left.size()]%mod;
        long long b = solve(left);
        long long c = solve(right);

        return (((a*b)%mod)*c)%mod;
    }

public:
    int numOfWays(vector<int>& nums) {
        
        pt.resize(nums.size()+1);
        for(int i = 0; i < pt.size(); i++){
            pt[i] = vector<long long>(i+1,1);
            for(int j = 1; j < i; j++){
                pt[i][j] = (pt[i-1][j]+pt[i-1][j-1])%mod;
            }
        }

        return (1LL*solve(nums)-1)%mod;

    }
};
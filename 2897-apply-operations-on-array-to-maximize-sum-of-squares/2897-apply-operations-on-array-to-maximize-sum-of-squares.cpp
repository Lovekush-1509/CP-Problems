class Solution {
// logic vid & code self
public:
    int maxSum(vector<int>& nums, int k) {
        vector<int>bits(32,0);

        for(int i = 0; i < 32; i++){
            int mask = (1<<i);
            for(int j = 0; j < nums.size(); j++){
                if(nums[j]&mask){
                    bits[i]++;;
                }
            }
        }

        // for(int i = 0; i < 32; i++){
        //     cout<<i<<":"<<bits[i]<<endl;
        // }

        long mod = 1e9+7;
        long res = 0;
        while(k){
            int newNum = 0;
            for(int i = 0; i < 32; i++){
                if(bits[i]){
                    newNum += (1<<i);
                    bits[i]--;
                }
            }

            k--;
            res = (res+((1LL*newNum*newNum)%mod))%mod;
        }

        return (int)res;

    }
};
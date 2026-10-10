class Solution {
//soln

public:
    long long minSumSquareDiff(vector<int>& nums1, vector<int>& nums2, int k1, int k2) {
        unordered_map<int,long long>bucket;
        int maxi = -1;
        long long sum  = 0;
        for(int i = 0; i < nums1.size(); i++){
            bucket[abs(nums1[i]-nums2[i])]++;
            sum += abs(nums1[i]-nums2[i]);
            maxi = max(maxi,abs(nums1[i]-nums2[i]));
        }

        long long k = k1+k2;
        if(k >= sum)return 0;

        long long res = 0;
        for(int i = maxi; i > 0 && k > 0; i--){
            int mini = min(k,bucket[i]);
            bucket[i] -= mini;
            bucket[i-1] += mini;
            k-= mini;
        }

        for(int i = 0; i <= maxi; i++){
            res += 1LL*i*i*bucket[i];
        }


        return res;
    }
};
class Solution {

    static bool comp(pair<int,int>&a,pair<int,int>&b){
        if(a.second == b.second){
            return a.first < b.first;
        }

        return a.second < b.second;
    }

public:
    int minSwaps(vector<int>& nums) {
        vector<pair<int,int>>arr(nums.size());
        unordered_map<int,int>mp;

        for(int i = 0; i < nums.size(); i++){
            int val = nums[i];
            mp[nums[i]] = i;
            int sum = 0;
            while(val){
                sum += val%10;
                val /= 10;
            }
            arr[i] = {nums[i],sum};
        }

        sort(arr.begin(),arr.end(),comp);


        // cycle detection
        int cycle = 0;
        int res = 0;
        set<int>st;

        for(int i = 0; i < nums.size(); i++){
            if(st.find(i) != st.end() || mp[arr[i].first] == i)continue;

            int j = i;
            cycle = 0;

            while(st.find(j) == st.end()){
                st.insert(j);
                j = mp[arr[j].first];
                cycle++;
            }

            res += cycle - 1;
        }

        return res;

    }
};

// 18,43,34,16
// 10,7,7,7
// 16,34,43,18
class Solution {
public:
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
        int res = 0;
        for(auto a1:arr1){
            for(auto a2:arr2){
                if(abs(a1-a2) <= d){
                    res++;
                    break;
                }
            }
        }
        return arr1.size()-res;
    }
};
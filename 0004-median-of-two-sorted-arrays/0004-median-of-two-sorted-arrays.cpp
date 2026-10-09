class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n=nums1.size()+nums2.size();
        vector<int>arr(n,0);
        int i=0,j=0,ind=0;
        while(i < nums1.size() && j < nums2.size()){
            if(nums1[i] < nums2[j]){
                arr[ind++]=nums1[i++];
            }else{
                arr[ind++]=nums2[j++];
            }
        }
        while(i < nums1.size()){
            arr[ind++]=nums1[i++];
        }
         while(j < nums2.size()){
            arr[ind++]=nums2[j++];
        }
        if(n%2==0){
            double x=(arr[(n-1)/2.0]+arr[n/2.0])/2.0;
            return x;
        }
        return arr[n/2];
    }
};
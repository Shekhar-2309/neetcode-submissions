class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        double t;
        vector<int> arr;
        for(int i =0;i<nums1.size();i++){
            arr.push_back(nums1[i]);
        }
        for(int i =0;i<nums2.size();i++){
            arr.push_back(nums2[i]);
        }
        sort(arr.begin(),arr.end());
        int l =0;
        int r = arr.size()-1;

        int mid = l +(r-l)/2;
        if(arr.size()% 2 == 0){
            t  = (arr[mid] + arr[mid+1]) / 2.0;
        }
        else{
            t = arr[mid];
        }
        return t;
    }
};

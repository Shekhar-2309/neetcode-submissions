class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> t(n);
        vector<int> p(n);

        p[0] =1 ;
        t[n-1] =1;
        for(int i=1;i<n;i++){
            p[i] = p[i-1] * nums[i-1];
        }
        for(int i = n-2;i>=0;i--){
            t[i] = t[i+1] * nums[i+1];
        }
        vector<int> r(n);
        for(int i =0;i<n;i++){
            r[i] = t[i] * p[i];
        }
        return r;
    }
};

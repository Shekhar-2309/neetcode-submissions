class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.empty()){
            return 0;
        }
        unordered_map<int,int> mp;
        vector<int> res;
        int value = 1;
        int longest = 1;
        for(int i =0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        for(auto& pair:mp){
            res.push_back(pair.first);
        }
        sort(res.begin(),res.end());
        for(int i =0;i<res.size()-1;i++){
            if(res[i]+1 == res[i+1]){
                value++;
            }
            else{
                value = 1;
            }
        longest = max(longest,value);
        }
        return longest;
    }
};

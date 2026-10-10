#include <algorithm>
class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        vector<pair<int,int>> t;
        for(int i =0;i<nums.size();i++){
            mp[nums[i]]++;   
        }
        for(auto& pair : mp){
            t.push_back({pair.second,pair.first}); 
        }
        sort(t.rbegin(),t.rend());
        vector<int> arr;
        for(int i =0;i<k;i++){
            arr.push_back(t[i].second);
        }

        
        return arr;
    }
};

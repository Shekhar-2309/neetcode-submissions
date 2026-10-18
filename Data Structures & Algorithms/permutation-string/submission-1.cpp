class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if (s1.size() > s2.size()) {
            return false;
        }

        vector<int> mp(26, 0);
        vector<int> st(26, 0);

        for (int i = 0; i < s1.size(); i++) {
            mp[s1[i] - 'a']++;
            st[s2[i] - 'a']++;
        }

        if (mp == st) {
            return true;
        }

        for (int i = s1.size(); i < s2.size(); i++) {
            st[s2[i] - 'a']++;
            st[s2[i - s1.size()] - 'a']--;

            if (mp == st) {
                return true;
            }
        }

        return false;
    }
};
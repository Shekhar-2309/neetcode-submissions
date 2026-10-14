class Solution {
public:
    int maxArea(vector<int>& heights) {
        int n = heights.size();
        int left =0;
        int maxarea =0;
        int right = n-1;
        while(left < right){
                int s = min(heights[right],heights[left]);
                int h = right -left;
                int q = s*h;
                maxarea = max(maxarea,q);
            if(heights[left] < heights[right]){
                left++;
            }
            else{
                right--;
            }
            }
            return maxarea;
        }
};

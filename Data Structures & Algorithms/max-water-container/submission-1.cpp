class Solution {
public:
    int maxArea(vector<int>& heights) {
        int left = 0;
        int right = heights.size() - 1;

        int result = 0;

        while (left < right){
            int maxArea = (right - left) * min(heights[left], heights[right]);
            result = max(result, maxArea);

            if(heights[left] < heights[right]){
                left ++;
            }
            else if(heights[left] > heights[right]){
                right --;
            }
            else {
                right --; // we could inc/dec either BUT only one pointer, NOT BOTH
            }
        }
        return result;
    }
};

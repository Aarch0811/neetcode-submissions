class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {

        // NOTE: No need to store the elements in another vector pair format
        // because numbers vector is SORTED for us, simple 2-pointer approach will so the job.

        int left = 0;
        int right = numbers.size() - 1;

        while (left < right){
            int TwoSum_sorted = numbers[left] + numbers[right];

            if (TwoSum_sorted == target){
                return {left + 1, right + 1};
            }

            else if (TwoSum_sorted < target){
                left++;
            }

            else {
                right--;
            }
        }
        return {};
    }
};

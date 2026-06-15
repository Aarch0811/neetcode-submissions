class Solution {
   public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        // NOTE: No need to store the elements in another vector pair format
        // because numbers vector is SORTED for us, simple 2-pointer approach will so the job.

        int left = 0;
        int right = numbers.size() - 1;

        while (left < right) {
            int TwoSum_sorted = numbers[left] + numbers[right];

            if (TwoSum_sorted == target) {
                return {left + 1, right + 1};
                // NOTE: We are adding +1 to both Left and right pointers because
                // its mentioned 1-indexing. Humans start counting from 1 and NOT 0
                // if it was 0-indexing then we would have returned left & right..
            }

            else if (TwoSum_sorted < target) {
                left++;
            }

            else {
                right--;
            }
        }
        return {};
    }
};

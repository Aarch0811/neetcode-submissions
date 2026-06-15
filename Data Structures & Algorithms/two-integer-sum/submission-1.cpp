class Solution {
   public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // NOTE: We shouldn't be sorting the vector first, because
        // you'll permanently lose the original positions of the numbers
        // As mentioned in the problem, we are required to return original indicelse

        vector<pair<int, int>> result; // Declaring vector in PAIR format [(2, 0), (1, 1)..}

        // Store the elements with original indices inside result vector
        for (int i = 0; i < nums.size(); i++) {
            result.push_back(
                {nums[i], i});  // We are storing the number + its index
                                // in the vector i.e. result = [(2, 0), (5, 1), (6, 2)..]
        }

        // After storing the elements in 'result' vector, sort it...
        sort(result.begin(), result.end());

        int left = 0;
        int right = nums.size() - 1;

        while (left < right) {
            int TwoSum = result[left].first + result[right].first;

            if (TwoSum == target) {
                int index1 = result[left].second;
                int index2 = result[right].second;
                return {min(index1, index2), max(index1, index2)};
            } else if (TwoSum > target) {
                right--;
            } else {
                left++;
            }
        }
        return {};  // If NO SOLUTION is Found!
    }
};

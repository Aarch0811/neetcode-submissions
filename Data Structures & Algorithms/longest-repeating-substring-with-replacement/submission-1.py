class Solution:
    def characterReplacement(self, s: str, k: int) -> int:
        # Sliding Window Optimal
        count = {}  # Frequency Map LIST
        result = 0

        left = 0
        right = 0
        maxF = 0

        for right in range(len(s)):
            count[s[right]] = 1 + count.get(s[right], 0)
            maxF = max(maxF, count[s[right]])

            while (right - left + 1) - maxF > k:
                count[s[left]] -= 1
                left += 1

            result = max(result, right - left + 1)
        return result

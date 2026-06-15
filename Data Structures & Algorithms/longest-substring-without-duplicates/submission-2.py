class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:
        left = 0
        right = 0
        result = 0

        character_set = set(); # defining an empty set

        for right in range(len(s)):

            while s[right] in character_set:
                character_set.remove(s[left])
                left += 1

            character_set.add(s[right])
            result = max(result, right - left + 1)
        
        return result
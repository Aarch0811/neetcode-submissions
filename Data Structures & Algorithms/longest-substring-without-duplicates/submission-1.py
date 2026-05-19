class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:
        left = 0
        result = 0

        character_Set = set() # Python's in-built DS

        for right in range(len(s)):
            # This loop-checker needs to be here to avoid the infinite loop error
            # Now since set is full, we need to start removing the elements from the character_Set
            while s[right] in character_Set:
                character_Set.remove(s[left])
                left += 1
                
            # start adding elements in the set and then destroying them
            # after encountering duplicates
            character_Set.add(s[right])
            result = max(result, right - left + 1)

            
        return result
class Solution:
    def canConstruct(self, ransomNote: str, magazine: str) -> bool:
        if len(ransomNote) > len(magazine):
            return False

        m = {}

        for c in magazine:
            if m.get(c) is None:
                m[c] = 1
            else:
                m[c] += 1
        
        for c in ransomNote:
            if m.get(c) is None or m.get(c) <= 0:
                return False
            
            m[c] -= 1

        return True
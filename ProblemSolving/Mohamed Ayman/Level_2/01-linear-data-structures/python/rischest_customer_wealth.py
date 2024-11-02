class Solution:
    def maximumWealth(self, accounts: List[List[int]]) -> int:
        answer =[]
        for l in accounts: 
            answer.append(sum(l))
        return(max(answer))
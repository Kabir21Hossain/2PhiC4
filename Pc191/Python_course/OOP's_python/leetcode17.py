from typing import List
class Solution:
    def  letterCombinations(self,digits:str)->list[str]:
        mapping={
            '2':'abc',
            '3':'def',
            '4':'ghi',
            '5':'jkl',
            '6':'mno',
            '7':'pqrs',
            '8':'tuv',
            '9':'wxyz'
        }

        n=len(digits)

        path=[]
        result=[]
        def backtrack(index:int):
            #base case
            if index==len(digits):
                result.append("".join(path))
                return

            for letters in mapping[digits[index]]:
                path.append(letters)
                backtrack(index+1)
                path.pop()

        backtrack(0)
        return result


if __name__=='__main__':
    sol=Solution()
    p=sol.letterCombinations("23")
    print(p)





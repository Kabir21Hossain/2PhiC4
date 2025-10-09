class Solution:
    def longestPalindrome(self,s:str)->str:
        n=len(s)
        if n==0:
            return ""
        

        dp=[[False]*n for _ in range(n)]
        max_len=start=0
        
        # length 1 of palindrome substring
        
        for i in range(n):
            dp[i][i]=True
        
        max_len=1
        
        
        # length 2 of palindrome substring
        
        for i in range(n-1):
            if s[i]==s[i+1]:
                dp[i][i+1]=True
                max_len=2
                start=i
        
        # length>=3
        
        for length in range(3,n+1):
            for i in range(n-length+1):
                j=i+length-1
                if s[i]==s[j] and dp[i+1][j-1]:
                    dp[i][j]=True
                    if length> max_len:
                        start=i
                        max_len=length
                        
        
        return s[start:start+max_len]
    
                    
                    
                    
                    
                
                
                
                
                
            

                
            
        
        
            
    
            



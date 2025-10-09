# class Solution:
#     def lengthOfLongestSubstring(self,s:str)->int:
#         v=[]
#         sub=0
        
#         for i in range(len(s)):
            
#             k=-1
#             for j in range(len(v)):
                
#                 if s[i]==v[j]:
#                     k=j
#                     break
                
#             if k!=-1:
#                 v=v[k+1:]
                    
#             v.append(s[i])
#             sub=max(sub,len(v))
        
#         return sub

# if __name__=='__main__':

#     s=Solution()
#     a='abcdabccabcdd'
#     l=s.lengthOfLongestSubstring(a)
#     print(l)


            
# def lengthOfLongestSubstring(s:str)->int:
#     seen=set()
#     left=0
#     max_len=0
    
#     for right in range(len(s)):
#         while s[right] in seen:
#             seen.remove(s[left])
#             left+=1
#         seen.add(s[right])
#         max_len=max(max_len,right-left+1)
#     return max_len



        

def length(s:str)->int:
    last_index={}
    left=0
    max_len=0
    
    for right,ch in enumerate(s):
        if ch in last_index and last_index[ch]>=left:
            left=last_index[ch]+1
        last_index[ch]=right
        max_len=max(max_len,right-left+1)
    return max_len
            
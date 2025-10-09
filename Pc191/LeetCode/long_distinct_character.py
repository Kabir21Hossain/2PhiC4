# s=input()
# k=int(input())
# max_len=0
# a=[]


# for i in range(len(s)):
    
#     a.append(s[i])

    
#     if len(set(a)) > k:
#         while len(set(a))>k:
#             a.pop(0)
            
                
   
        
#     max_len=max(max_len,len(a))
    
# print(max_len)


def longest_substring_k_distinct(s:str,k:int)->int:
    from collections import defaultdict
    left=0
    max_len=0
    freq=defaultdict(int)
    
    for right in range(len(s)):
        freq[s[right]]+=1
        
        while len(freq) > k:
            freq[s[left]]-=1
            if freq[s[left]]==0:
                del freq[s[left]]
            left+=1
            
        max_len=max(max_len,right-left+1)
    
    return max_len

    
    

if __name__=='__main__':
    print(longest_substring_k_distinct("eceba", 2))  # 3
            
    
    
    
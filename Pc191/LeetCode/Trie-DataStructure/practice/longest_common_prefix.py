class TrieNode:
    def __init__(self):
        self.children={}
        self.EOW=False

class Solution:
    def longestCommonPrefix(self,strs:list[str])->str:
        if len(strs)==0:
            return ""
        if len(strs)==1:
            return strs[0]
        
        root=TrieNode()
        
        for word in strs:
            if not word:
                return " "
            
            node=root
            for ch in word:
                if ch not in node.children:
                    node.children[ch]=TrieNode()
                node=node.children[ch]
            node.EOW=True
        
        node=root
        prefix=""
        while len(node.children)==1 and not node.EOW:
            char=list(node.children)[0]
            prefix+=char
            node=node.children[char]
        
        return prefix
    
    
            
            
            
        
            
        
        
        
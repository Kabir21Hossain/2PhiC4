class TrieNode:
    def __init__(self):
        self.children={}
        self.EOW=False

class WordDictionary:
    def __init__(self):
        self.root=TrieNode()
    
    
    def addWord(self,word):
        node=self.root
        for ch in word:
            if ch not in node.children:
                node.childre[ch]=TrieNode()
            node=node.children[ch]
        node.EOW=True
    
    def search(self,word):
        
        def dfs(node,index):
            if index==len(word):
                return node.EOW
            
            
            char=word[index]
            if char !='.':
                if char not in node.children:
                    return False
                return dfs(node.children[char],index+1)
            else:
                for child in node.children.values():
                    return dfs(child,index+1)

            return False
        
        return dfs(self.root,0)
    
                    
            
            
                
                
                
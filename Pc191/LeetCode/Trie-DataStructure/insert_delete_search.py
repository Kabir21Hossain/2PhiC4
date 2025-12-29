class TrieNode:
    def __init__(self):
        self.children={}
        self.EOF=False
    
class Trie:
    def __init__(self):
        self.root=TrieNode()
    
    def insert(self,word):
        node=self.root
        for char in word:
            if char not in node.children:
                node.children[char]=TrieNode()
            node=node.children[char]
        
        node.EOF=True
        
    def search(self,word):
        node=self.root
        
        for char in word:
            if char not in node.children:
                return False
            node=node.children[char]
            
        return node.EOF
    
    def startsWith(self,prefix):
        node=self.root
        
        for char in prefix:
            if char not in node.children:
                return False
            node=node.children[char]
        return True
    
    # def delete(self,word:str):
        
    #     def _delete(node:TrieNode,word:str,index:int):
    #         if index==len(word):
    #             if not node.EOF:
    #                 return False
    #             node.EOF=False

    #             return len(node.children)==0
            
    #         char =word[index]
    #         if char not in node.children:
    #             return False
            
    #         child_node=node.children[char]
    #         should_delete_child=_delete(child_node,word,index+1)
            
    #         if should_delete_child:
    #             del node.children[char]
    #             return len(node.children)==0 and not node.EOF
            
    #     _delete(self.root,word,0)
    
    
    def delete(self,word):
        def dfs(node:TrieNode,word:str,index:int)->bool:
            if index==len(word):
                if not node.EOF:
                    return False
                
                node.EOF=False
                return len(node.children)==0
            
            
            char=word[index]
            if char not in node.children:
                return False
            
            child_node=node.children[char]
            should_delete_node=dfs(child_node,word,index+1)
            
            if should_delete_node:
                del node.children[char]
                return len(node.children)==0 and not node.EOF

            return False
        
        dfs(self.root,word,0)
        
            
                
        


if __name__=="__main__":
    newTrie=Trie()
    newTrie.insert("ant")
    newTrie.insert("and")
    newTrie.insert("apple")
    newTrie.insert("Past")
    newTrie.insert("egg")
    newTrie.insert("past")
    newTrie.insert("part")
    newTrie.insert("pay")
    
    print(newTrie.search("apple"))
    print(newTrie.search("past"))
    print(newTrie.startsWith("app"))
    
    
            
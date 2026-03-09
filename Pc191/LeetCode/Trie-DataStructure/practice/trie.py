class TrieNode:
    def __init__(self):
        self.children={}
        self.EOW=False

class Trie:
    def __init__(self):
        self.root=TrieNode()
    
    
    def insert(self,word):
        node=self.root
        
        for ch in word:
            if ch not in node.children:
                node.children[ch]=TrieNode()
            node=node.children[ch]
        node.EOW=True
    
    def search(self,word):
        node=self.root
        
        for ch in word:
            if ch not in node.children:
                return False
            node=node.children[ch]
        return node.EOW
    
    def prefix(self,word):
        node=self.root
        
        for ch in word:
            if ch not in node.children:
                return False
            node=node.children[ch]
            
        return True
    
    def delete(self,word):
        node=self.root
        
        def dfs(node,index):
            
            if index==len(word):
                if not node.EOW:
                    return False
                node.EOW=False

                return len(node.children)==0
            
            char=word[index]
            
            if char not in node.children:
                return False
        
            should_delete_child=dfs(self.root,index+1)
            if should_delete_child:
                del node.children[char]
                return len(node.children)==0 and not node.EOW
            return False
        
        dfs(self.root,0)
        

trie=Trie()
trie.insert("apple")
trie.insert("app")
trie.insert("banana")
trie.insert("application")
trie.insert("and")
trie.insert("ant")
trie.insert("egg")

print(trie.search("apple"))

print(trie.search("kabir"))
print(trie.prefix("ap"))

print(trie.delete("app"))
         
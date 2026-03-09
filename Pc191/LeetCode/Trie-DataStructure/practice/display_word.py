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
    
    def display(self):
        words=[]
        def dfs(node,word):
            if node.EOW:
                words.append(word)
            
            for char in node.children.keys():
                dfs(node.children[char],word+char)
        
        dfs(self.root,'')
        return words

trie=Trie()
trie.insert("kabir")
trie.insert("king")
trie.insert("apple")
trie.insert("app")
trie.insert("application")
trie.insert("and")
print(trie.display())
        
                
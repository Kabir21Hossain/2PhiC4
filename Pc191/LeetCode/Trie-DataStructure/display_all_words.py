class TrieNode:
    def __init__(self):
        self.children={}
        self.EOW=False
        self.word=None

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
        node.word=word

    def display(self):
        node=self.root
        result=[]
        def dfs(node):
            if node.EOW:
                result.append(node.word)
                return


            for child in node.children.values():
                dfs(child)

        dfs(self.root)
        print(result)




tree=Trie()
tree.insert("and")
tree.insert("ant")
tree.insert("app")
tree.insert("application")
tree.insert("apple")
tree.insert("egg")
tree.insert("elephant")
tree.insert("tree")
tree.insert("tap")

tree.display()



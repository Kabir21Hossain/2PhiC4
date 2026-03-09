class TrieNode:
    def __init__(self):
        self.children={}
        self.EOW=False

class Trie:
    def __init__(self):
        self.root=TrieNode()

    def insert(self,word)->None:
        if not word:
            return

        node=self.root

        for ch in word:
            if ch not in node.children:
                node.children[ch]=TrieNode()
            node=node.children[ch]
        node.EOW=True

    def search(self,word):
        if not word:
            return False
        node=self.root

        for ch in word:
            if ch not in node.children:
                return False
            node=node.children[ch]

        return node.EOW

    def prefix(self,word):
        if not word:
            return False
        node=self.root
        for ch in word:
            if ch not in node.children:
                return False
            node=node.children[ch]

        return True




class TrieNode:
    def __init__(self):
        self.children={}
        self.EOW=False

class Solution:
    def longestCommonPrefix(self,strs:list[str]):
        if not strs or not strs[0]:
            return ""
        if len(strs)==1:
            return strs[0]

        root=TrieNode()

        for word in strs:
            node=root
            for ch in word:
                if ch not in node.children:
                    node.children[ch]=TrieNode
                node=node.children[ch]
            node.EOW=True

        prefix=""
        node=root

        while len(node.children)==1 and not node.EOW:
            char=list(node.children.keys())[0]
            prefix+=char
            node=node.children[char]
        return prefix
    

class Solution:
    def replaceWords(self,dictionary:list[str],sentence:str)->str:
        root={}
        for word in dictionary:
            node=root
            for ch in word:
                if ch not in node:
                    node[ch]={}
                node=node[ch]
            node['#']=word
        def get_root(word:str)->str:
            node=root
            for i,ch in enumerate(word):
                if '#' in node:
                    return word[:i]
                if ch not in node:
                    return word
                node=node[ch]

        words=sentence.split()
        replaced=[get_root(w) for w in words]
        return ' '.join(replaced)






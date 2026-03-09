def findAncestor(root,target):

    result=[]

    def dfs(parent):
        if not parent:
            return False

        if parent.val==target:
            return True

        for child in parent.children:
            if dfs(child):
                result.append(parent.val)
                return True

        return False

    dfs(root)
    return result



def detectCycle(root):
    visited=set()

    def dfs(node):
        if not node:
            return False
        if node in visited:
            return True

        visited.add(node)

        for child in node.children:
            if dfs(child):
                return True

        return False
    
    return dfs(root)

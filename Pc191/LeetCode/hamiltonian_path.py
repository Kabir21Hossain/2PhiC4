def hamilton_path(adj_list):
    n = len(adj_list)
    
    def forward(node_no, visited, path):
        if len(path) == n:
            return True
        
        for node in adj_list[node_no]:
            if not visited[node]:
                visited[node] = True
                path.append(node)
                
                if forward(node, visited, path):
                    return True
                
                path.pop()
                visited[node] = False
                
        return False

    # Try starting from every node
    for start in range(n):
        visited = [False]*n
        path = [start]
        visited[start] = True
        
        if forward(start, visited, path):
            print("Hamiltonian Path Exists →", path)
            return

    print("No Hamiltonian Path Exists")

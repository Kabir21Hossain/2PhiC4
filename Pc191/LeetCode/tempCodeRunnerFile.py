def hamilton_path(adj_list):
    n=len(adj_list)
    visited=[False for _ in range(n)]
    
    path=[]
    
    def forward(node_no):
        if len(path)==n:
            return True
        
        for node in adj_list[node_no]:
            
            if not visited[node]:
                
                visited[node]=True
                path.append(node)
                
                if forward(node):
                    return True
                
                path.pop()
                visited[node]=False
                
        return False
    
    visited[0]=True
    path.append(0)
    
    
    if forward(0):
        print("True")
        print(path)
    else:
        print("False")

adj_list = [
    [1,14],        # 0
    [0,2],         # 1
    [1,3],         # 2
    [2,4],         # 3
    [3,5],         # 4
    [4,6],         # 5
    [5,7,11],      # 6
    [6,10],        # 7
    [9],           # 8
    [8,10],        # 9
    [7,9,12],      # 10
    [6,12],        # 11
    [10,11,13],    # 12
    [12,14],       # 13
    [0,13]         # 14
]



hamilton_path(adj_list)

    
    
    
    
                
                
                
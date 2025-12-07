from mpmath.libmp import bin_to_radix


def binary_string(n:int,k:int)->list[str]:
    res=[]
    path=[]
    def backtrack(index,ones_count):
        #base_case
        if len(path)==n:
            if ones_count==k:
                res.append(''.join(path))
            return


        path.append('0')
        backtrack(index+1,ones_count)
        path.pop()
        if ones_count<k:
            path.append('1')
            backtrack(index+1,ones_count+1)
            path.pop()

    backtrack(0,0)
    return res

print(binary_string(3,2))

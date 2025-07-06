def do_it(l):
    if len(l) == 0:
        return float('inf')  # invalid case
    if (l[0] + l[-1]) % 2 == 0:
        return 0

    # Try removing first element
    res1 = 1 + do_it(l[1:])
    # Try removing last element
    res2 = 1 + do_it(l[:-1])

    # Return the minimum of the two options
    return min(res1, res2)

t = int(input())
for _ in range(t):
    n = int(input())
    l = list(map(int, input().split()))
    l.sort()
    print(do_it(l))
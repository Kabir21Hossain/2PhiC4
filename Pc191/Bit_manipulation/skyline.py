import heapq

def getSkyline(buildings):
    events = []
    for L, R, H in buildings:
        events.append((L, -H, R))   # entering building
    # Only entering events in heap version
    events.sort()

    result = []
    heap = [(0, float('inf'))]  # (negative height, right x)
    prev_max = 0

    i = 0
    n = len(events)

    # process all x positions where buildings start or end
    points = sorted(set([L for L, _, _ in events] + [R for _, _, R in events]))

    for x in points:
        # add new buildings whose left <= x
        while i < n and events[i][0] <= x:
            L, negH, R = events[i]
            heapq.heappush(heap, (negH, R))
            i += 1

        # remove buildings that have ended before x
        while heap and heap[0][1] <= x:
            heapq.heappop(heap)

        cur_max = -heap[0][0]
        if cur_max != prev_max:
            result.append([x, cur_max])
            prev_max = cur_max

    return result


# Example test
buildings = [[2,9,10],[3,7,15],[5,12,12],[15,20,10],[19,24,8]]
print(getSkyline(buildings))

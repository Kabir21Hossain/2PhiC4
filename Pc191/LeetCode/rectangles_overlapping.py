def is_overlapping(p1, p2):
    x1, y1 = p1[0]
    x2, y2 = p1[1]
    x3, y3 = p2[0]
    x4, y4 = p2[1]

    # Non-overlapping conditions:
    if x2 <= x3 or x1 >= x4:
        return False  # One is left/right of the other
    if y2 <= y3 or y1 >= y4:
        return False  # One is above/below the other
    
    return True

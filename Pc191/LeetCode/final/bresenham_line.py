import matplotlib.pyplot as plt

def bresenham_line(x1, y1, x2, y2):
    points = []  # store all the pixels (x, y)

    dx = abs(x2 - x1)
    dy = abs(y2 - y1)
    sx = 1 if x2 > x1 else -1  # step for x
    sy = 1 if y2 > y1 else -1  # step for y
    err = dx - dy

    x, y = x1, y1
    while True:
        points.append((x, y))  # plot the pixel
        if x == x2 and y == y2:
            break
        e2 = 2 * err
        if e2 > -dy:
            err -= dy
            x += sx
        if e2 < dx:
            err += dx
            y += sy

    return points


# Example usage:
if __name__ == "__main__":
    x1, y1 = 2, 2
    x2, y2 = 9, 6
    line_points = bresenham_line(x1, y1, x2, y2)

    print("Line points:")
    for p in line_points:
        print(p)

    # Optional: visualize with matplotlib
    xs, ys = zip(*line_points)
    plt.plot(xs, ys, marker="s", color="black")
    plt.title("Bresenham Line from ({},{}) to ({},{})".format(x1, y1, x2, y2))
    plt.gca().invert_yaxis()
    plt.grid(True)
    plt.show()

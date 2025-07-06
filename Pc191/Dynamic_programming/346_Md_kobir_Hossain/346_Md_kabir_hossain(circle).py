def bresenham_circle(xc, yc, r):
    x = 0
    y = r
    d = 3 - 2 * r
    points = []

    while x <= y:
        points += [(xc + x, yc + y), (xc - x, yc + y),
                   (xc + x, yc - y), (xc - x, yc - y),
                   (xc + y, yc + x), (xc - y, yc + x),
                   (xc + y, yc - x), (xc - y, yc - x)]
        if d < 0:
            d = d + 4 * x + 6
        else:
            d = d + 4 * (x - y) + 10
            y -= 1
        x += 1

    return points


def midpoint_circle(xc, yc, r):
    x = 0
    y = r
    p = 1 - r
    points = []

    while x <= y:
        points += [(xc + x, yc + y), (xc - x, yc + y),
                   (xc + x, yc - y), (xc - x, yc - y),
                   (xc + y, yc + x), (xc - y, yc + x),
                   (xc + y, yc - x), (xc - y, yc - x)]
        if p < 0:
            p = p + 2 * x + 3
        else:
            p = p + 2 * (x - y) + 5
            y -= 1
        x += 1

    return points


import matplotlib.pyplot as plt

def plot_points(points, title):
    x, y = zip(*points)
    plt.figure(figsize=(6, 6))
    plt.scatter(x, y, s=5)
    plt.title(title)
    plt.gca().set_aspect('equal')
    plt.grid(True)
    plt.show()

# Example Usage
bres_points = bresenham_circle(100, 100, 50)
midp_points = midpoint_circle(100, 100, 50)

plot_points(bres_points, "Bresenham's Circle Algorithm")
plot_points(midp_points, "Midpoint Circle Algorithm")



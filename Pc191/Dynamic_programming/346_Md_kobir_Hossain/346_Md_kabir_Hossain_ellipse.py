import matplotlib.pyplot as plt

def midpoint_ellipse(rx, ry, xc, yc):
    x = 0
    y = ry

    # Square of rx and ry
    rx2 = rx * rx
    ry2 = ry * ry

    # Decision parameters
    dx = 2 * ry2 * x
    dy = 2 * rx2 * y

    # Region 1
    p1 = ry2 - (rx2 * ry) + (0.25 * rx2)
    points = []

    while dx < dy:
        # Plot all 4 symmetric points
        points.extend([
            (xc + x, yc + y), (xc - x, yc + y),
            (xc + x, yc - y), (xc - x, yc - y)
        ])
        x += 1
        dx = 2 * ry2 * x
        if p1 < 0:
            p1 += ry2 + dx
        else:
            y -= 1
            dy = 2 * rx2 * y
            p1 += ry2 + dx - dy

    # Region 2
    p2 = ry2 * (x + 0.5)**2 + rx2 * (y - 1)**2 - rx2 * ry2

    while y >= 0:
        # Plot all 4 symmetric points
        points.extend([
            (xc + x, yc + y), (xc - x, yc + y),
            (xc + x, yc - y), (xc - x, yc - y)
        ])
        y -= 1
        dy = 2 * rx2 * y
        if p2 > 0:
            p2 += rx2 - dy
        else:
            x += 1
            dx = 2 * ry2 * x
            p2 += dx - dy + rx2

    return points

# Example usage
rx, ry = 80, 40
xc, yc = 100, 100
points = midpoint_ellipse(rx, ry, xc, yc)

# Plotting
x_vals, y_vals = zip(*points)
plt.figure(figsize=(6, 6))
plt.scatter(x_vals, y_vals, s=2)
plt.title("Midpoint Ellipse Scan Conversion")
plt.gca().set_aspect('equal')
plt.grid(True)
plt.show()

import matplotlib.pyplot as plt
from typing import List, Tuple

# Geometry classes and functions
class Point:
    def __init__(self, x: float, y: float):
        self.x = x
        self.y = y

    def __sub__(self, other: 'Point') -> 'Point':
        return Point(self.x - other.x, self.y - other.y)

def cross(a: Point, b: Point) -> float:
    return a.x * b.y - a.y * b.x

def point_in_triangle(a: Point, b: Point, c: Point, p: Point) -> bool:
    cp1 = cross(b - a, p - a)
    cp2 = cross(c - b, p - b)
    cp3 = cross(a - c, p - c)
    return (cp1 >= 0 and cp2 >= 0 and cp3 >= 0) or (cp1 <= 0 and cp2 <= 0 and cp3 <= 0)

def is_inside_convex_polygon(polygon: List[Tuple[float, float]], px: float, py: float) -> bool:
    pts = [Point(x, y) for x, y in polygon]
    p = Point(px, py)
    n = len(pts)

    if n < 3:
        return False

    if cross(pts[1] - pts[0], p - pts[0]) < 0:
        return False
    if cross(pts[-1] - pts[0], p - pts[0]) > 0:
        return False

    l, r = 1, n - 1
    while r - l > 1:
        m = (l + r) // 2
        if cross(pts[m] - pts[0], p - pts[0]) >= 0:
            l = m
        else:
            r = m

    return point_in_triangle(pts[0], pts[l], pts[(l + 1) % n], p)

# Visualization function
def simulate():
    # Define a convex polygon (CCW)
    polygon = [(0, 0), (5, 1), (6, 4), (3, 6), (1, 5)]

    # Test points
    test_points = [
        (3, 3),     # inside
        (6, 2),     # outside
        (0, 0),     # on vertex
        (4, 5),     # inside
        (1, 6),     # outside
        (3, 0.5),   # inside
        (5.5, 4.2), # on edge
    ]

    # Run test and visualize
    inside_points = []
    outside_points = []

    for px, py in test_points:
        if is_inside_convex_polygon(polygon, px, py):
            inside_points.append((px, py))
        else:
            outside_points.append((px, py))

    # Plot
    poly_x, poly_y = zip(*polygon + [polygon[0]])  # close the polygon

    plt.figure(figsize=(8, 8))
    plt.plot(poly_x, poly_y, 'k-', linewidth=2, label="Polygon")
    plt.fill(poly_x, poly_y, 'lightgray', alpha=0.5)

    if inside_points:
        in_x, in_y = zip(*inside_points)
        plt.scatter(in_x, in_y, color='green', label='Inside', s=100, marker='o')
    if outside_points:
        out_x, out_y = zip(*outside_points)
        plt.scatter(out_x, out_y, color='red', label='Outside', s=100, marker='x')

    plt.title("Point-In-Convex-Polygon (O(log n)) Simulation")
    plt.legend()
    plt.grid(True)
    plt.axis("equal")
    plt.show()

simulate()

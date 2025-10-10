class Solution:
    def countLatticePoints(self, circles: list[list[int]]) -> int:
        points = set()
        for x, y, r in circles:
            for i in range(x - r, x + r + 1):
                for j in range(y - r, y + r + 1):
                    if (i - x) ** 2 + (j - y) ** 2 <= r ** 2:
                        points.add((i, j))
        return len(points)

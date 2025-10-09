class Solution:

    def __init__(self, radius: float, x_center: float, y_center: float):
        self.radius=radius
        self.h=x_center
        self.k=y_center

        
    def randPoint(self) -> List[float]:
        r=self.radius*math.sqrt(random.random())
        theta=2*math.pi*random.random()
        x=self.h+ r*cos(theta)
        y=self.k+r*sin(theta)

        result=[float(x),float(y)]
        return result

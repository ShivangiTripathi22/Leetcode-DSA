class Solution:
    def checkOverlap(self, radius: int, xCenter: int, yCenter: int, x1: int, y1: int, x2: int, y2: int) -> bool:
        import math

        x_close=max(x1,min(x2,xCenter))
        y_close=max(y1,min(y2,yCenter))

        dist=math.sqrt((x_close-xCenter)**2+(y_close-yCenter)**2)
        if dist<=radius:
            return True

        return False
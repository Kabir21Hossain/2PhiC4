class Solution:
    def isSelfCrossing(self, distance: list[int]) -> bool:
        n=len(distance)

        if n<=3:
            return False

        for i in range(3,n):

            if distance[i-1]<=distance[i-3] and distance[i]>=distance[i-2]:
                return True

            if i>=4:
                if distance[i-3]==distance[i-1] and distance[i-4]+distance[i]>=distance[i-2]:
                    return True
            if i>=5:
                if distance[i-2]>=distance[i-4] and distance[i-2]<=distance[i-4]+distance[i] and distance[i-5]+distance[i-1]>=distance[i-3] and\
                    distance[i-3] >= distance[i-1]:
   
                    return True
        
        return False



            







        
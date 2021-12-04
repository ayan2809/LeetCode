class Solution(object):
    def reverse(self, x):
        f=0
        if x<0:
            f=1
            y=abs(x)
        else:
            y=x
            
        z =str(y)[::-1]
        z=int(z)
        if f==1:
            z=-z
        if z<-2147483648 or z>2147483647:
            return 0
        """
        :type x: int
        :rtype: int
        """
        return z
        
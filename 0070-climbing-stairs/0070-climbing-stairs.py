class Solution:
    def climbStairs(self, n: int) -> int:
        mem ={}
        def f(k):
            if k <= 2:
                return k
            if k not in mem:
                mem[k] = f(k-1)+ f(k-2)
            return mem[k]
        return f(n)
import random, sys
ri = lambda a,b: random.randint(a,b)  # 随机整数
ra = lambda n,mn,mx: [ri(mn,mx) for _ in range(n)]  # 随机数组
rp = lambda n: random.sample(range(1,n+1), n)  # 随机排列
rs = lambda n: ''.join(chr(ri(97,122)) for _ in range(n))  # 随机小写串
rb = lambda n: ''.join('01'[ri(0,1)] for _ in range(n))  # 随机二进制串
def rt(n):  # 随机树
    e = []
    for i in range(2, n+1):
        e.append((ri(1,i-1), i))
    random.shuffle(e)
    return e
def rg(n,m,d=0):  # 随机图
    e = set()
    while len(e) < m:
        u,v = ri(1,n),ri(1,n)
        if u==v: continue
        if not d and u>v: u,v=v,u
        e.add((u,v))
    return list(e)
if __name__ == "__main__":
    random.seed(123)  # 固定种子
n, q = 100000, 100000
print(n, q)
print(*ra(n, 1, 10**9))
for _ in range(q):
    print(ri(1,n), ri(1,n))
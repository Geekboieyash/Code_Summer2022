t = int(input())
while t>0:
    n = int(input())
    array = list(map(int, input().split(" ")[:n]))
    total=sum(array)
    if total%2 == 0:
        print("YES")
    else:
        print("NO")
    t-=1
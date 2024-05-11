n, total = list(map(int,input().split()))

new = list(map(int,input().split()))

new_total = sum(new)

tt = total+new_total

main = tt/n

ans = []
for i in range(n):
    x = main-(new[i])
    ans.append(x)


if all(i>=0 for i in ans):
    for i in ans:
        print(f"{i:.6f}")
else:
    print(-1)
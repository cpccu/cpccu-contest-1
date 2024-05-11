n, b = map(int, input().split())
a = list(map(int, input().split()))

total_volume = sum(a)
target_volume = (total_volume + b) / n

if target_volume < max(a):
    print("-1")
else:
    result = [target_volume - x for x in a]
    for volume in result:
        print("{:.6f}".format(volume))

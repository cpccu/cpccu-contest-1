def distribute_drink(n, b, volumes):
    total_volume = sum(volumes)
    
    if total_volume > b:
        print(-1)
        return
    
    remaining_volume = b - total_volume
    result = [(v + remaining_volume / n) for v in volumes]
    
    for r in result:
        print("{:.6f}".format(r))

# Read input
n, b = map(int, input().split())
volumes = list(map(int, input().split()))

# Solve and print output
distribute_drink(n, b, volumes)

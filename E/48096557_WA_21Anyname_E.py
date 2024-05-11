def distribute_drink(n, b, volumes):
    total_volume = sum(volumes)

    if total_volume + b < n:
        print("-1")
        return

    target_volume = (total_volume + b) / n

    for vol in volumes:
        additional_volume = target_volume - vol
        print("{:.6f}".format(additional_volume))

# Example usage:
n, b = map(int, input().split())
volumes = list(map(int, input().split()))

distribute_drink(n, b, volumes)

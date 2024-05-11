def equalize_volumes(n, b, volumes):
    total_volume = sum(volumes)

    # If total volume in mugs is greater than the bottle volume, no solution is possible
    if total_volume > b:
        return -1

    remaining_volume = b - total_volume

    # Calculate the volume to be added to each mug
    volumes_to_add = [max(0, max(volumes) - mug_volume) for mug_volume in volumes]

    # Check if it's possible to add the remaining volume evenly to all mugs
    if sum(volumes_to_add) == 0:
        return -1

    # Calculate the ratio to distribute the remaining volume
    ratio = remaining_volume / sum(volumes_to_add)

    # Calculate the final volumes to be added to each mug
    result = [round(volume_to_add + ratio, 6) for volume_to_add in volumes_to_add]

    return result

# Read the input
n, b = map(int, input().split())
volumes = list(map(int, input().split()))

# Calculate and print the result
result = equalize_volumes(n, b, volumes)
if result == -1:
    print(-1)
else:
    for volume in result:
        print(volume)

def pour_ber_cola(n, b, volumes):
    total_volume = sum(volumes)
    required_volume_per_mug = total_volume + b

    if required_volume_per_mug % n == 0:
        equal_volume_per_mug = required_volume_per_mug // n
        additional_volume = equal_volume_per_mug - volumes[0]

        if additional_volume >= 0:
            result = [additional_volume]
            for i in range(1, n):
                result.append(equal_volume_per_mug)
            return result
        else:
            return [-1]
    else:
        return [-1]

# Read input
n, b = map(int, input().split())
volumes = list(map(int, input().split()))

# Solve the problem
result = pour_ber_cola(n, b, volumes)

# Print the result
for value in result:
    print("{:.6f}".format(value))

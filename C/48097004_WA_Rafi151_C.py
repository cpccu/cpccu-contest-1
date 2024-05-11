def max_game_result(n):
    # If n is even, the maximum result is n/2 * (n/2 + 1)
    # If n is odd, the maximum result is (n+1)/2 * (n+1)/2
    return (n // 2) * ((n // 2) + 1) if n % 2 == 0 else ((n + 1) // 2) * ((n + 1) // 2)

# Read input
n = int(input())

# Solve and print output
result = max_game_result(n)
print(result)

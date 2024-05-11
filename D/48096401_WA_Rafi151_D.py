def maximum_result(n):
    # If n is even, the maximum result is n/2. If n is odd, the maximum result is (n+1)/2.
    return (n + 1) // 2

# Read input
n = int(input())

# Calculate and print the result
result = maximum_result(n)
print(result)

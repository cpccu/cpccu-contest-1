# Read input
n = int(input())
matrix = [list(map(int, input().split())) for _ in range(n)]

# Calculate the sum of good matrix elements
sum_good_elements = 0
for i in range(n):
    sum_good_elements += matrix[i][i]  # Sum of elements on the main diagonal
    sum_good_elements += matrix[i][n - 1 - i]  # Sum of elements on the anti-diagonal

# If n is odd, subtract the center element as it is counted twice
if n % 2 == 1:
    sum_good_elements -= matrix[n // 2][n // 2]

# Print the result
print(sum_good_elements)

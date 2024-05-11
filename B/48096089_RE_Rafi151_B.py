# Read input
n = int(input())
matrix = [list(map(int, input().split())) for _ in range(n)]

# Calculate the sum of good matrix elements
sum_good_elements = 0
for i in range(n):
    for j in range(n):
        if i != j and i + j != n - 1:
            sum_good_elements += matrix[i][j]

# Print the result
print(sum_good_elements)

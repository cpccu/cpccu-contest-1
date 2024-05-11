def sum_good_elements(n, matrix):
    result = 0
    for i in range(n):
        for j in range(n):
            if i != j and i+j != n-1:
                result += matrix[i][j]
    return result

# Read input
n = int(input())
matrix = []
for _ in range(n):
    row = list(map(int, input().split()))
    matrix.append(row)

# Calculate and print the result
result = sum_good_elements(n, matrix)
print(result)

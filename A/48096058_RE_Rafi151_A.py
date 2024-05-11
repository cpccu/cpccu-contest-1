# Function to calculate the sum of good matrix elements
def sum_of_good_elements(matrix):
    n = len(matrix)
    result = 0

    for i in range(n):
        for j in range(n):
            if i % 2 == 0 and j % 2 == 0:
                result += matrix[i][j]

    return result

# Read input
n = int(input())
matrix = []
for _ in range(n):
    row = list(map(int, input().split()))
    matrix.append(row)

# Calculate and print the sum of good matrix elements
print(sum_of_good_elements(matrix))

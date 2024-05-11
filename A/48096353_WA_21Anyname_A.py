n = int(input())
matrix = [list(map(int, input().split())) for _ in range(n)]

total_sum = 0

for i in range(n):
    total_sum += matrix[i][i]
for i in range(n):
    total_sum += matrix[i][n - i - 1]

total_sum += sum(matrix[n // 2])

for i in range(n):
    total_sum += matrix[i][n // 2]

print(total_sum)

n = int(input())

arr = []
for _ in range(n):
    x = list(map(int,input().split()))
    arr.append(x)

count1 = 0
count2 = 0
count3 = 0
count4 = 0

for i in range(n):
    count1+= arr[i][i]

s = n-1
for i in range(n):
    count2+= arr[i][s-i]

m = n//2
for i in range(n):
    count3+= arr[i][m]

for i in range(n):
    count3+= arr[m][i]

total = count1+count2+count3+count4 - ((arr[m][m])*3)

print(total)
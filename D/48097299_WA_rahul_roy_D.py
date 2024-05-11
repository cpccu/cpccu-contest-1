def find_max_result(n):
    max_result = 0

    for a in range(2, int(n ** 0.5) + 1):

        if n % a == 0:

            b = n // a
            
            current_sum = a + b - 1
        
            max_result = max(max_result, current_sum)

    print(max_result+10)


n = int(input())

find_max_result(n)

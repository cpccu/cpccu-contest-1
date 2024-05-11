def pour_ber_cola(n, b, mugs):
    total_mug_volume = sum(mugs)
    remaining_volume = b

    target_volume = total_mug_volume + remaining_volume

    if target_volume % n != 0:
        print(-1)
        return

    equal_volume = target_volume // n

    pour_amounts = [equal_volume - mug for mug in mugs]
    
    for amount in pour_amounts:
        print('{:.6f}'.format(amount))

# Read input
n, b = map(int, input().split())
mugs = list(map(int, input().split()))

# Call the function with the provided inputs
pour_ber_cola(n, b, mugs)

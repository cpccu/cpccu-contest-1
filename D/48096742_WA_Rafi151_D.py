def max_game_result(n):
    result = 0

    # Continue the game until there is only one pebble left
    while n > 1:
        # Find the largest divisor of the current pebbles
        divisor = 2
        while n % divisor != 0:
            divisor += 1

        # Update the result and reduce the pebbles
        result += n // divisor
        n = n // divisor

    # Add the remaining pebble to the result
    result += 1

    return result

# Read the input
n = int(input())

# Calculate and print the maximum possible result
print(max_game_result(n))

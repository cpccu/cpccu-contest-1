def max_game_result(n):
    result = 0

    # Start with the initial number of pebbles
    current_pebbles = n

    # Continue the game until there is only one pebble left
    while current_pebbles > 1:
        # Find the largest divisor of the current pebbles
        divisor = 2
        while current_pebbles % divisor != 0:
            divisor += 1

        # Update the result and reduce the pebbles
        result += current_pebbles // divisor
        current_pebbles = current_pebbles // divisor

    # Add the remaining pebble to the result
    result += 1

    return result

# Read the input
n = int(input())

# Calculate and print the maximum possible result
print(max_game_result(n))

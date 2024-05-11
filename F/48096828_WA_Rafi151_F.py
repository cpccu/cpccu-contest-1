def divide_into_parts(s):
    parts = []
    current_part = ""
    i = 0

    while i < len(s):
        # Check if the current character is a valid letter
        if s[i].isalpha():
            current_part += s[i]
            i += 1
        # Check if the current character is a period
        elif s[i] == '.':
            current_part += s[i]
            i += 1
            # Check if there is a valid extension after the period
            if i < len(s) and s[i].isalpha():
                current_part += s[i]
                i += 1
            else:
                return "NO"

            parts.append(current_part)
            current_part = ""
        else:
            return "NO"

    if current_part:
        parts.append(current_part)

    return ["YES"] + parts

# Read the input
s = input()

# Calculate and print the result
result = divide_into_parts(s)
for line in result:
    print(line)

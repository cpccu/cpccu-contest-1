def repair_file_names(s):
    result = []
    current_file_name = ""

    for char in s:
        current_file_name += char
        if len(current_file_name) > 8:
            return "NO"

        if char == '.':
            if len(current_file_name) <= 12 and len(current_file_name) > 1:
                result.append(current_file_name[:-1])
                current_file_name = ""
            else:
                return "NO"

    if current_file_name and len(current_file_name) <= 12:
        result.append(current_file_name)

    return result

# Read input
s = input()

# Solve the problem
result = repair_file_names(s)

# Print the result
if result == "NO":
    print("NO")
else:
    print("YES")
    for file_name in result:
        print(file_name)

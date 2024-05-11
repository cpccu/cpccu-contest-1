def valid_file_name(s):
    valid_extensions = set()
    for ext_len in range(1, 4):
        for i in range(len(s) - ext_len - 1):
            ext = s[i + 1:i + 1 + ext_len]
            if ext.isalpha() and ext.islower():
                valid_extensions.add(ext)

    for name_len in range(1, 9):
        for i in range(len(s) - name_len - 4):
            name = s[i:i + name_len]
            if name.isalpha() and name.islower() and s[i + name_len] == '.' and s[i + name_len + 1:i + name_len + 4] in valid_extensions:
                return True, [name, s[i + name_len], s[i + name_len + 1:i + name_len + 4]]

    return False, []


def repair_file_names(s):
    result = []
    valid, parts = valid_file_name(s)

    if valid:
        print("YES")
        for part in parts:
            print(part)
    else:
        print("NO")


# Read input
s = input()

# Solve the problem
repair_file_names(s)

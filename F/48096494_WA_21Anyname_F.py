def reconstruct_file_names(s):
    result = []
    current = ""
    i = 0

    while i < len(s):
        
        while i < len(s) and s[i] != '.':
            current += s[i]
            i += 1

       
        if len(current) == 0 or len(current) > 8:
            print("NO")
            return

        
        i += 1

      
        while i < len(s) and s[i] != '.':
            current += '.' + s[i]
            i += 1

      
        if len(current) <= 8 or len(current) > 12 or current.count('.') != 1:
            print("NO")
            return

        result.append(current)
        current = ""
        i += 1

    print("YES")
    for item in result:
        print(item)

input_str = input()
reconstruct_file_names(input_str)

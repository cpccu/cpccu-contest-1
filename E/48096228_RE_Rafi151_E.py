def main():
    n, b = map(int, input().split())
    a = list(map(int, input().split()))

    total_volume = sum(a)

    if total_volume + b < n * max(a):
        print("-1")
    else:
        equal_volume = (total_volume + b) / n
        additional_volume = [equal_volume - ai for ai in a]
        
        for vol in additional_volume:
            print("{:.6f}".format(vol))

if __name__ == "__main__":
    main()

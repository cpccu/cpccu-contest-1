def main():
    n, b = map(int, input().split())
    a = list(map(int, input().split()))

    total_volume = sum(a)

    if total_volume + b < n or (b // n == 0 and total_volume < b):
        print("-1")
    else:
        target_volume = (total_volume + b) // n
        remaining = b % n

        result = [target_volume] * n

        for i in range(remaining):
            result[i] += 1

        for vol in result:
            print("{:.6f}".format(vol))


if __name__ == "__main__":
    main()

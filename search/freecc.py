def main():
    list =[1, 2, 3, 4, 5, 6, 7, 8, 9, 10]
    print(f"{binary(list, 10)}")


def binary(list, target):
    first = 0
    last = len(list) - 1
    while first <= last:
        midpoint = (last + first) // 2
        print(f"Midpoint Index: {midpoint}\nCurrent Midpoint: {list[midpoint]} Target: {target}")
        if list[midpoint] == target:
            return midpoint
        elif list[midpoint] < target:
            first = midpoint + 1
        else:
            last = midpoint - 1


if __name__ == "__main__":
    main()
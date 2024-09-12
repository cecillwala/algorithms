def main():
    lst = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]
    target = int(input("Target: "))
    print(binary(lst, target))


def binary(list, target):
    if len(list) == 0:
        return "Not Found" 
    first = 0
    last = len(list) - 1

    midpoint =(first + last) // 2
    print(f"Current Midpoint Index: {midpoint}\nCurrent Midpoint: {list[midpoint]} Target: {target}")
    if list[midpoint] == target:
        return midpoint
    elif list[midpoint] < target:
        return binary(list[midpoint + 1:], target)
    else:
        return binary(list[:midpoint], target)


if __name__ == "__main__":
    main()
def main():
    list =  [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]
    target = int(input("Target: "))
    index = binary_search(list, target, 0, len(list) - 1)
    print(f'Target Index: {index}')



def binary_search(list, target, first, last):
    midpoint = (last + first) // 2
    print(f"Current Midpoint Index: {midpoint}\nCurrent Midpoint: {list[midpoint]} Target: {target}")

    if first > last:
        return "Not Found"
    elif list[midpoint] == target:
        return midpoint
    elif list[midpoint] < target:
        return binary_search(list, target, midpoint + 1, last)
    else:
        return binary_search(list, target, first, midpoint - 1)


if __name__ == "__main__":
    main()
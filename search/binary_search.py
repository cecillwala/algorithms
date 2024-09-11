def main():
    list =  [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]
    index = binary_search(list, 10, 0, len(list) - 1)
    print(f'Target Index: {index}')



def binary_search(list, target, first, last):
    if first > last:
        return "Not Found"
    
    midpoint = (last + first) // 2
    print(f"Midpoint Index: {midpoint}\nCurrent Midpoint: {list[midpoint]}\nTarget: {target}")
    
    if list[midpoint] == target:
        return midpoint
    elif list[midpoint] < target:
        binary_search(list, target, midpoint + 1, last)
    else:
        binary_search(list, target, first, midpoint - 1)


if __name__ == "__main__":
    main()
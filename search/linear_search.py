def main():
    list =  [3, 2, 3, 4, 2, 78, 9, 87, 6 ,5]
    print(f"{linear(list, 5)}")


def linear(list, target):
    for i in range(len(list)):
        if list[i] == target:
            return i
    return None


if __name__ == "__main__":
    main()
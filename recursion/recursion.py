def pyramid(n):
    if(n <= 0):
        return
    else:
        pyramid(n - 1)

        for _ in range(n):
            print("#", end="")
        print()


pyramid(8)
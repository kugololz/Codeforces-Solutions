cases = int(input())

for x in range(cases):
    size = int(input())
    max = 0

    string = input()
    for char in string:
        letter = (ord(char) - 96)
        if letter > max:
            max = letter
    print(max)

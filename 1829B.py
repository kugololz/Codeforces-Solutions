t = int(input())

for x in range(t):
    blank = 0
    size = input()
    string = (input())
    string = string.replace(" ","")
    string = string.split("1")

    for dato in string:
        if len(dato) > blank:
            blank = len(dato)

    print(blank)
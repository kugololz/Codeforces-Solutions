t = int(input())

for x in range(t):
    contador = 0
    cf = "codeforces"
    cf = [*cf]
    string = input()
    string = [*string]

    for i in range(10):
        if string[i] != cf [i]:
            contador += 1
    print(contador)
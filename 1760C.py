cases = int(input())

for x in range(cases):
    size = int(input())
    max = 0
    maxs = 0
    lista = []
    support = []
    difference = []
    lista = list(map(int, input().split()))
    for dato in lista:
        if dato > max:
            max = dato;

    for dato in lista:
        if dato != max:
            difference.append(dato-max)
        elif dato == max:
            for i in lista:
                if i != max:
                    if i > maxs:
                        maxs = i
            difference.append(max-maxs)

    print(' '.join(map(str, difference)))

    lista.clear()
    support.clear()
    difference.clear()
cases = int(input())

for x in range(cases):
    coordenadas = []
    passed = False
    coordenadas.append(0)
    coordenadas.append(0)

    size = int(input())
    directions = input()
    directions = [*directions]

    for dato in directions:
        if dato == 'U':
            coordenadas[1] += 1
        elif dato == 'R':
            coordenadas[0] += 1
        elif dato == 'D':
            coordenadas[1] -= 1
        elif dato == 'L':
            coordenadas[0] -= 1        
        if coordenadas[0] == 1 and coordenadas[1] == 1:
            passed = True

    if passed:
        print("YES")
    else:
        print("NO")

    coordenadas.clear()

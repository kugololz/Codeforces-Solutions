cases = int(input())

for x in range(cases):
    a, b, c = map(int, input().split())

    max_num = max(a, b, c)
    min_num = min(a, b, c)

    if a == max_num or a == min_num:
        if b == max_num or b == min_num:
            print(c)
        elif c == max_num or c == min_num:
            print(b)
    
    elif b == max_num or b == min_num:
        if c == max_num or c == min_num:
            print(a)
        elif a == max_num or a == min_num:
            print(c)

    elif c == max_num or c == min_num:
        if a == max_num or a == min_num:
            print(b)
        elif b == max_num or b == min_num:
            print(a)
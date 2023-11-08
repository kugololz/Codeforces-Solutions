t = int(input())
for x in range(t):
    n = input()
    array = input()
    array = array.replace(" ", "")
    array = [*array]
    status = True
    for dato in array:
        if(array.count(dato) >= 3):
            print(dato)
            status = False
            break
    if (status == True):
        print(-1)
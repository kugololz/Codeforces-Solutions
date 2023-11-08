tc = int(input())
list = []


for x in range(tc):
    n = input()
    n = [*n]
    count = 0

    for dato in n:
        list.append(dato)
    
    list.reverse()

    for dato in list:
        if dato != "0":
            count+=1

    print(count)
    for i in range(len(list)):
        if(list[i] != "0"):
            print(list[i] + ("0"*i), end=" ")

    print(" ")
    list.clear()
        

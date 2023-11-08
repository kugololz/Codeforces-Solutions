cases = int(input())
string = "codeforces"


for x in range(cases):
    letter = input()
    if letter in string:
        print("YES")
    else:
        print("NO")
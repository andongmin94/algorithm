a, b = input().split()
c = True

for i in range(2, int(b)):
    if int(a) % i == 0:
        print("BAD", i)
        c = False
        break

if c:
    print("GOOD")
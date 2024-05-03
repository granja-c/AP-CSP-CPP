import math
a1 = input("Address 1: ")
a2 = input("Address 2: ")

ad1 = [i for i in a1.split()]
ad2 = [i for i in a2.split()]
# [num, s/n, num, e/w]
x1 = int(ad1[2])
y1 = int(ad1[0])
x2 = int(ad2[2])
y2 = int(ad2[0])

if ad1[1] == "S":
    y1 = 0 - y1
if ad2[1] == "S":
    y2 = 0 - y2
if ad1[3] == "W":
    x1 = 0 - x1
if ad2[3] == "W":
    x2 = 0 - x2

x = (x1 - x2) / 1200
y = (y1 - y2) / 800

d = x ** 2 + y ** 2
d = math.sqrt(d)

print(d, " miles")
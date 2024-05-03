import math
lo1 = float(input()) * math.pi / 180
la1 = float(input()) * math.pi / 180

lo0 = float(input()) * math.pi / 180
la0 = float(input()) * math.pi / 180

x = (math.cos(la0) * math.cos(lo0) * math.cos(la1) * math.cos(lo1)) + (math.cos(la0) * math.sin(lo0) * math.cos(la1) \
                                                                       * math.sin(lo1)) + math.sin(la0) * math.sin(la1)

d = 3963.1 * math.acos(x)
print(d, " miles")

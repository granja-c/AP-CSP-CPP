x = input()
reps = []
rlen = 0
cs = x[0]

for i in range(0, len(x)-1):
    if x[i+1] == x[i]:
        cs += x[i+1]
    else:
        if len(cs) > rlen:
            rlen = len(cs)
            reps = [cs[0]]
        if len(cs) == rlen:
            reps.append(cs[0])
        cs = ""
print(rlen, reps)
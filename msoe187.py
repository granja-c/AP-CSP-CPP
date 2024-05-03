utime = int(input("UNIX time: "))
yrs = int(utime / (86400 * 365.25))
lp = int((yrs + 1) / 4)
if lp < 0:
    lp = 0
tiy = utime - yrs * (86400 * 365) - lp * 86400

fd = 28
if (yrs + 2) % 4 == 0:
    fd = 29

diy = int(tiy / 86400)
diy = diy + 1
daysinmonth = [31, fd, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31]
d = 0
dind = 0

while d == 0:
    if diy <= daysinmonth[dind]:
        month = dind + 1
        d = diy
    else:
        diy -= daysinmonth[dind]
        dind += 1

tid = tiy % 86400
hid = int(tid / 3600)
mih = tid % 3600
if hid >= 12:
    ap = 'PM'
    hid = hid - 12
else:
    ap = 'AM'

if hid == 0:
    hid = 12

# minutes
min = int(mih / 60)

# display
print('{:02d}:{:02d} {:2} {:02d}/{:02d}/{:04d}'.format(hid, min, ap, month, d, yrs + 1970))

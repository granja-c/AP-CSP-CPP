txt = input("Plain or cipher text: ")
txt = txt.upper()
key = int(input("Key: "))
nums = []
for c in txt:
    nums.append((ord(c) - 32) & 0x3F)
while (len(nums) % 5) != 0:
    nums.append(0)

n30 = []
for i in range(0, len(nums), 5):
    n30.append(nums[i] << 24 | nums[i + 1] << 18 | nums[i + 2] << 12 | nums[i + 3] << 6 | nums[i + 4])

pnum30 = []
for n in n30:
    pnum30.append(n ^ key)
    key *= 2
    if key & 0x40000000:
        key = key + 1
        key = key & 0x3FFFFFFF

for i in pnum30:
    print(chr(((i >> 24) & 0x3F) + 32) + chr(((i >> 18) & 0x3F) + 32) + \
          chr(((i >> 12) & 0x3F) + 32) + chr(((i >> 6) & 0x3F) + 32) + chr((i & 0x3F) + 32))
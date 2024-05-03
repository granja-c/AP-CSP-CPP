amt = int(input("Enter reservoir size: "))
rq = input("Enter requests: ")
requests = [int(x) for x in rq.split()]

cups = 0
for r in requests:
  if amt < 10:
    print(str(cups) + "cups filled")
    exit()
  else:
    cups += 1
    amt -= (r + 1)

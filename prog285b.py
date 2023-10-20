from Cl285b import *

def main():
  try:
    print("Number   Code   Sales   Commission")
    people = []
    with open("data/prog285b.txt", 'r') as f:
      for line in f:
        ldata = line.split(" ")
        id = int(ldata[0])
        code = int(ldata[1])
        sales = float(ldata[2])
        sp = Salesperson(id, code, sales)
        people.append(sp)
    for sp in people:
      sp.calc()
      print(sp)
      
  except Exception as e:
    print("Error: ", e)

if __name__ == "__main__":
  main()
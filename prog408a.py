from Cl408a import *
from sorts import *
from time import *
def main():
  try:
    lines = []
    list = []
    with open("data/prg408a.dat", 'r') as f:
      lines = f.readlines()
      for i in range(0, len(lines), 2):
        id = lines[i]
        pts = lines[i+1]
        p = Cl408a(id, pts)
        list.append(p)

      s = Sorts()
      s1 = perf_counter()
      list = s.bubble(list)
      e1 = perf_counter()
      print("Bubble Sort\nID\tScore")
      for i in list:
        print(i.id, "\t", i.pts)
      print(f"Sorting time: {e1-s1:.8f} seconds")

      s2 = perf_counter()
      list = s.selection(list)
      e2 = perf_counter()
      print("Selection Sort\nID\tScore")
      for i in list:
        print(i.id, "\t", i.pts)
      print(f"Sorting time: {e2-s2:.8f} seconds")

      s3 = perf_counter()
      list = s.insertion(list)
      e3 = perf_counter()
      print("Insertion Sort\nID\tScore")
      for i in list:
        print(i.id, "\t", i.pts)
      print(f"Sorting time: {e3-s3:.8f} seconds")

      if e1-s1 > e2-s2 and e1-s1 > e3-s3:
        print("Fastest sort: bubble sort")
      elif e2-s2 > e1-s1 and e2-s2 > e3-s3:
        print("Fastest sort: selection sort")
      else:
        print("Fastest sort: insertion sort")
        
  except Exception as e:
    print("Error: ", e)
  pass

if __name__ == "__main__":
  main()
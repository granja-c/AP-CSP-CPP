from search import *
from time import perf_counter
def main():
  try:
    nums = []
    with open("data/prog408b.dat", 'r') as f:
      nums = [int(line) for line in f]
      key = int(input("Number to search for: "))
      search = Search()
      
      s1 = perf_counter()
      lin1 = search.linear(nums, key)
      e1 = perf_counter()
      print("\nLinear search (unsorted): Number found at index ", lin1)
      print(f"Search time: {e1-s1:.8f} seconds")
      
      nums.sort()
      s2 = perf_counter()
      lin2 = search.linear(nums, key)
      e2 = perf_counter()
      print("\nLinear search (sorted): Number found at index ", lin2)
      print(f"Search time: {e2-s2:.8f} seconds")

      s3 = perf_counter()
      bin = search.binary(nums, key)
      e3 = perf_counter()
      print("\nBinary search: Number found at index ", bin)
      print(f"Search time: {e3-s3:.8f} seconds")



  except Exception as e:
    print("Error:", e)
  pass

if __name__ == "__main__":
  main()
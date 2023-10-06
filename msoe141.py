def main():
  wrd = input("Enter a string: ")
  wrd = wrd.lower()
  cnt = 0
  if len(wrd) == 0 or len(wrd) == 1:
    print("No double letters")

  else:
    for i in range(0, len(wrd) - 1):
      if wrd[i] == wrd[i+1]:
        cnt += 1
    print(f"The word '{wrd}' has {cnt} double letters")
  pass

if __name__ == "__main__":
  main()
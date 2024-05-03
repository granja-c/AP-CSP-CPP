class Mergesort:
  @staticmethod
  def sort(A):
    if len(A) > 1:
      mid = int(len(A) / 2)
      l = A[0:mid-1]
      r = A[mid:len(A)]
      Mergesort.sort(l)
      Mergesort.sort(r)
      Mergesort.merge(A, l, r)
    return A
  
  @staticmethod
  def merge(A, l, r):
    i = 0
    j = 0
    k = 0
    while i < len(l) and j < len(r):
      if l[i] < r[j]:
        A[k] = l[i]
        i += 1
      else:
        A[k] = r[j]
        j += 1
      k += 1
    while i < len(l):
      A[k] = l[i]
      i += 1
      k += 1
    while j < len(r):
      A[k] = r[j]
      j += 1
      k += 1
    return A
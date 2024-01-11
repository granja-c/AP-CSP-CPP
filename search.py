class Search:
  def linear(self, list, k):
    for i in range(len(list)):
      if list[i] == k:
        return i
    return -1

  def binary(self, list, k):
    low = 0
    high = len(list) - 1
    while low <= high:
      mid = int(low + (high-low)/2)
      if (list[mid] == k):
        return mid
      elif list[mid] < k:
        low = mid + 1
      else:
        high = mid - 1
    return -1
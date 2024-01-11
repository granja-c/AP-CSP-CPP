class Sorts:
  def bubble(self, list):
    for i in range(0, len(list)-1):
      for j in range(0, len(list)-i-1):
        if list[j+1].__lt__(list[j]):
          temp = list[j]
          list[j] = list[j+1]
          list[j+1] = temp
    return list
    
  def selection(self, list):
    for i in range(0, len(list)-1):
      min_ind = i
      for j in range(i+1, len(list)):
        if list[j].__lt__(list[min_ind]):
          min_ind = j

      temp = list[i]
      list[i] = list[min_ind]
      list[min_ind] = temp
    return list

  def insertion(self, list):
    for i in range(1, len(list)):
      key = list[i]
      j = i - 1
      while j >= 0 and key.__lt__(list[j]):
        list[j+1] = list[j]
        j = j-1
      list[j + 1] = key
    return list
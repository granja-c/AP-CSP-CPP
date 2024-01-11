class Cl408a:
  def __init__(self, id, pts):
    self.id = id
    self.pts = pts

  
  def __lt__(self, other):
    return self.pts < other.pts
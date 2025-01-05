class Graph:
 def __init__(self):
  self.graph = {}
 def add_edge(self, u, v):
  self.graph.setdefault(u, []).append(v)

def dfs(graph, start, visited=None):
 if visited is None:
  visited = set()
 visited.add(start)
 print(start, end=' ')
 for neighbor in graph.graph.get(start, []):
  if neighbor not in visited:
   dfs(graph, neighbor, visited)

def bfs(graph, start):
 visited = set([start])
 queue = [start]
 while queue:
  node = queue.pop(0)
  print(node, end=' ')
  for neighbor in graph.graph.get(node, []):
   if neighbor not in visited:
    visited.add(neighbor)
    queue.append(neighbor)

g = Graph()
for u, v in [(1, 2), (1, 3), (2, 4), (2, 5), (3, 6), (3, 7)]:
 g.add_edge(u, v)
print("DFS Traversal:")
dfs(g, 1)
print("\nBFS Traversal:")
bfs(g, 1)

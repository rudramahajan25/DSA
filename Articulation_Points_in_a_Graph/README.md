# Articulation Points in a Graph

# Articulation Points in a Graph
# Articulation Point
If removing a vertex and its related edges causes the graph to become disconnected, the vertex is considered to be an articulation point in the graph. Therefore, the number of related components in a graph grows as articulation points are removed. A connected component, or simply component, is a subgraph where every pair of nodes is connected to every other node by a path.
Sometimes articulation points are referred to as cut vertices.
Finding all of a graph's articulation points is the primary goal here which can be done by Tarjan’s Algorithm.
# **Problem**
Given an undirected graph G, find all the articulation points in the graph.
- For a connected undirected graph, an articulation point or a cut vertex is a vertex in the graph removing which disconnects the graph.
- For a disconnected undirected graph, an articulation point or a cut vertex is a vertex removing which increases the number of connected components.
Examples of Articulation Points:
![https://files.codingninjas.in/article_images/articulation-points-in-a-graph-0-1642277047.webp](https://files.codingninjas.in/article_images/articulation-points-in-a-graph-0-1642277047.webp)
![https://files.codingninjas.in/article_images/articulation-points-in-a-graph-1-1642277047.webp](https://files.codingninjas.in/article_images/articulation-points-in-a-graph-1-1642277047.webp)
---
**Input:**
- The first line contains two integers, V and E.
- The following E lines have two integers, u and v, representing an edge between vertex u and v.
**Output:**
Print all the articulation points in one line.
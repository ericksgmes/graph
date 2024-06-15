# Simple Graph Implementation Using Adjacency Matrix

This program provides a simple implementation of a graph using an adjacency matrix. The adjacency matrix is a 2D array where the entry `matrix[i][j]` represents an edge from vertex `i` to vertex `j`.

## Usage

1. **Create a Graph**: Use the `create_graph` function to create a graph with a specified number of vertices.
2. **Insert Edges**: Use the `insert_edge` function to insert edges between vertices.
3. **Print Graph**: Use the `print_graph` function to print the adjacency matrix of the graph.

## Example

```c
#include "graph.h"
#include <stdio.h>

int main() {
    // Create a graph with 5 vertices
    t_graph *graph = create_graph(5);

    // Insert edges
    insert_edge(graph, 0, 1);
    insert_edge(graph, 0, 2);
    insert_edge(graph, 1, 2);
    insert_edge(graph, 2, 3);
    insert_edge(graph, 3, 4);

    // Print the graph
    printf("Adjacency Matrix:\n");
    print_graph(graph);

    return 0;
}
```

## Functions

- `t_graph * create_graph(int vertices)`: Creates a graph with the specified number of vertices.
- `void insert_edge(t_graph *graph, int src, int dest)`: Inserts an edge between the source and destination vertices.
- `void print_graph(t_graph *graph)`: Prints the adjacency matrix of the graph.

## Graph Struct

```c
typedef struct {
    int num_vertices;
    int **adj_matrix;
} t_graph;
```

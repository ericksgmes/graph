# Simple Graph Implementation Using Adjacency Matrix and Adjacency List

This program provides a simple implementation of a graph using both an adjacency matrix and an adjacency list.

## Usage

1. **Create a Graph**: 
   - Use `create_adj_matrix(int vertices)` for an adjacency matrix.
   - Use `create_adj_list(int vertices)` for an adjacency list.

2. **Insert Edges**:
   - Use `insert_adj_matrix(t_graph *graph, int src, int dest)` for the adjacency matrix.
   - Use `insert_adj_list(t_graph *graph, int src, int dest)` for the adjacency list.

3. **Print Graph**:
   - Use `print_graph(t_graph *graph)` to print the adjacency matrix.
   - Use `print_adj_list(t_graph *graph)` to print the adjacency list.

## Example

```c
#include "graph.h"
#include <stdio.h>

int main() {
    // Adjacency Matrix Example
    t_graph *matrix_graph = create_adj_matrix(5);
    insert_adj_matrix(matrix_graph, 0, 1);
    insert_adj_matrix(matrix_graph, 0, 2);
    insert_adj_matrix(matrix_graph, 1, 2);
    insert_adj_matrix(matrix_graph, 2, 3);
    insert_adj_matrix(matrix_graph, 3, 4);
    printf("Adjacency Matrix:\n");
    print_graph(matrix_graph);

    // Adjacency List Example
    t_graph *list_graph = create_adj_list(5);
    insert_adj_list(list_graph, 0, 1);
    insert_adj_list(list_graph, 0, 4);
    insert_adj_list(list_graph, 1, 2);
    insert_adj_list(list_graph, 1, 3);
    insert_adj_list(list_graph, 1, 4);
    insert_adj_list(list_graph, 2, 3);
    insert_adj_list(list_graph, 3, 4);
    printf("Adjacency List:\n");
    print_adj_list(list_graph);

    return 0;
}
```

## Graph Structures

- `t_graph`: Contains the number of vertices and the adjacency structure.
- `t_adj_node`: Represents a node in the adjacency list.

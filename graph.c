//
// Created by erick on 6/14/2024.
//

#include "graph.h"
#include <stdlib.h>
#include <stdio.h>


t_graph * create_graph(int vertices) {
    t_graph * graph = (t_graph *) malloc(sizeof(t_graph));
    graph->num_vertices = vertices;
    graph->adj_matrix = (int **) malloc(sizeof(int *) * vertices);
    for (int i = 0; i < vertices; ++i) {
        graph->adj_matrix[i] = (int *) malloc(sizeof(int) * vertices);
        for (int j = 0; j < vertices; ++j) {
            graph->adj_matrix[i][j] = 0;
        }
    }
    return graph;
}


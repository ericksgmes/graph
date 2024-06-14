//
// Created by erick on 6/14/2024.
//

#ifndef GRAPH_H
#define GRAPH_H

typedef struct {
    int num_vertices;
    int **adj_matrix;
} t_graph;

t_graph * create_graph(int vertices);
void insert_edge(t_graph *graph, int src, int dest);
void print_graph(t_graph *graph);
char * graph_labels(int size);

#endif

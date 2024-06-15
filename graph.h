//
// Created by erick on 6/14/2024.
//

#ifndef GRAPH_H
#define GRAPH_H

typedef struct adj_node {
    int dest;
    struct adj_node* next;
} t_adj_node;

typedef struct {
    int num_vertices;
    int **adj_struct;
} t_graph;

t_graph * create_adj_matrix(int vertices);
t_graph* create_adj_list(int vertices);
void insert_adj_matrix(t_graph *graph, int src, int dest);
void insert_adj_list(t_graph *graph, int src, int dest);
void print_graph(t_graph *graph);
char * graph_labels(int size);
void print_adj_list(t_graph *graph);

#endif

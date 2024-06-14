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

void insert_edge(t_graph *graph, int src, int dest) {
    graph->adj_matrix[src][dest] = 1;
}

char* graph_labels(int size) {
    char* letters = (char*)malloc(size * sizeof(char));

    for (int i = 0; i < size; i++) {
        letters[i] = 'A' + i % 26;
    }

    return letters;
}

void print_graph(t_graph *graph) {
    char * labels = graph_labels(graph->num_vertices);
    printf("   ");
    for (int i = 0; i < graph->num_vertices; ++i) {
        printf("%c", labels[i]);
        printf("   ");
    }
    printf("\n");

    for (int i = 0; i < graph->num_vertices; ++i) {
        printf("%c  ", labels[i]);
        for (int j = 0; j < graph->num_vertices; ++j) {
            printf("%d", graph->adj_matrix[i][j]);
            printf("   ");

        }
        printf("\n");
    }
}



